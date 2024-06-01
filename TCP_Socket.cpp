#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sockfd;
    struct sockaddr_in serverAddr;

    // Create TCP socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        std::cerr << "Error creating socket" << std::endl;
        return 1;
    }

    // Initialize server address structure
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET; // IPv4
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server IP address
    serverAddr.sin_port = htons(8080); // Server port number in network byte order

    // Connect to server
    if (connect(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Error connecting to server" << std::endl;
        return 1;
    }

    std::cout << "Connected to server" << std::endl;

    // Send data to server
    const char *message = "Hello, server!";
    if (send(sockfd, message, strlen(message), 0) < 0) {
        std::cerr << "Error sending data to server" << std::endl;
        return 1;
    }

    std::cout << "Data sent to server: " << message << std::endl;

    // Receive response from server
    char buffer[1024];
    int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
    if (bytesReceived < 0) {
        std::cerr << "Error receiving data from server" << std::endl;
        return 1;
    }

    buffer[bytesReceived] = '\0'; // Null-terminate the received data
    std::cout << "Response from server: " << buffer << std::endl;

    // Close socket
    close(sockfd);

    return 0;
}
