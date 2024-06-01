#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int serverSocket;
    struct sockaddr_in serverAddress;

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Error creating socket" << std::endl;
        return 1;
    }

    // Initialize server address structure
    serverAddress.sin_family = AF_INET; // IPv4
    serverAddress.sin_addr.s_addr = INADDR_ANY; // Accept connections on any IP address
    serverAddress.sin_port = htons(8080); // Port number in network byte order

    // Bind socket to the server address
    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        std::cerr << "Error binding socket" << std::endl;
        return 1;
    }

    // Listen for incoming connections
    if (listen(serverSocket, 5) < 0) {
        std::cerr << "Error listening on socket" << std::endl;
        return 1;
    }

    std::cout << "Server listening on port 8080" << std::endl;

    // Accept incoming connection
    int clientSocket;
    struct sockaddr_in clientAddress;
    socklen_t clientAddrLen = sizeof(clientAddress);

    clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, &clientAddrLen);
    if (clientSocket < 0) {
        std::cerr << "Error accepting connection" << std::endl;
        return 1;
    }

    // Convert client IP address to string
    char clientAddrStr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &(clientAddress.sin_addr), clientAddrStr, INET_ADDRSTRLEN);
    std::cout << "Connection accepted from " << clientAddrStr << std::endl;

    // Close client socket
    close(clientSocket);

    // Close server socket
    close(serverSocket);

    return 0;
}
