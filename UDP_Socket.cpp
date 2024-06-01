#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>


int main() {
    int sockfd;
    struct sockaddr_in serverAddr, clientAddr;

    // Create UDP socket
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Error creating socket" << std::endl;
        return 1;
    }

    // Initialize server address structure
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET; // IPv4
    serverAddr.sin_addr.s_addr = INADDR_ANY; // Accept packets on any IP address
    serverAddr.sin_port = htons(8080); // Port number in network byte order

    // Bind socket to the server address
    if (bind(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Error binding socket" << std::endl;
        return 1;
    }

    std::cout << "UDP server listening on port 8080" << std::endl;

    while (true) {
        char buffer[1024];
        socklen_t clientAddrLen = sizeof(clientAddr);

        // Receive data from client
        int bytesReceived = recvfrom(sockfd, buffer, sizeof(buffer), 0,
                                     (struct sockaddr *)&clientAddr, &clientAddrLen);
        if (bytesReceived < 0) {
            std::cerr << "Error receiving data" << std::endl;
            return 1;
        }

        // Convert client IP address to string
        char clientAddrStr[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &(clientAddr.sin_addr), clientAddrStr, INET_ADDRSTRLEN);

        // Print received message and client information
        std::cout << "Received message from " << clientAddrStr << ":" << ntohs(clientAddr.sin_port) << std::endl;
        std::cout << "Message: " << buffer << std::endl;
    }

    // Close socket
    close(sockfd);

    return 0;
}
