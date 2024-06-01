// #include <iostream>
// #include <cstring>
// #include <sys/socket.h>
// #include <netinet/in.h>
// #include <unistd.h>

// int main() {
//     int serverSocket, clientSocket;
//     struct sockaddr_in serverAddr, clientAddr;
//     char buffer[1024];

//     // Create TCP socket
//     serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//     if (serverSocket < 0) {
//         std::cerr << "Error creating socket" << std::endl;
//         return 1;
//     }

//     // Initialize server address structure
//     serverAddr.sin_family = AF_INET; // IPv4
//     serverAddr.sin_addr.s_addr = INADDR_ANY; // Accept connections on any IP address
//     serverAddr.sin_port = htons(8080); // Port number in network byte order

//     // Bind socket to server address
//     if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
//         std::cerr << "Error binding socket" << std::endl;
//         return 1;
//     }

//     // Listen for incoming connections
//     if (listen(serverSocket, 5) < 0) {
//         std::cerr << "Error listening on socket" << std::endl;
//         return 1;
//     }

//     std::cout << "Server listening on port 8080" << std::endl;

//     // Accept incoming connection
//     socklen_t clientAddrLen = sizeof(clientAddr);
//     clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &clientAddrLen);
//     if (clientSocket < 0) {
//         std::cerr << "Error accepting connection" << std::endl;
//         return 1;
//     }

//     // Receive data from client
//     int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
//     if (bytesReceived < 0) {
//         std::cerr << "Error receiving data" << std::endl;
//         return 1;
//     }

//     // Print received message
//     buffer[bytesReceived] = '\0'; // Null-terminate the received data
//     std::cout << "Received message from client: " << buffer << std::endl;

//     // Send response to client
//     const char *response = "Hello from server!";
//     if (send(clientSocket, response, strlen(response), 0) < 0) {
//         std::cerr << "Error sending response" << std::endl;
//         return 1;
//     }

//     // Close sockets
//     close(clientSocket);
//     close(serverSocket);

//     return 0;
// }


// #include <iostream>
// #include <cstring>
// #include <sys/socket.h>
// #include <netinet/in.h>
// #include <arpa/inet.h>
// #include <unistd.h>

// int main() {
//     int sockfd;
//     struct sockaddr_in serverAddr;
//     char buffer[1024];

//     // Create TCP socket
//     sockfd = socket(AF_INET, SOCK_STREAM, 0);
//     if (sockfd < 0) {
//         std::cerr << "Error creating socket" << std::endl;
//         return 1;
//     }

//     // Initialize server address structure
//     serverAddr.sin_family = AF_INET; // IPv4
//     serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server IP address
//     serverAddr.sin_port = htons(8080); // Server port number in network byte order

//     // Connect to server
//     if (connect(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
//         std::cerr << "Error connecting to server" << std::endl;
//         return 1;
//     }

//     // Send data to server
//     const char *message = "Hello, server!";
//     if (send(sockfd, message, strlen(message), 0) < 0) {
//         std::cerr << "Error sending data to server" << std::endl;
//         return 1;
//     }

//     // Receive response from server
//     int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
//     if (bytesReceived < 0) {
//         std::cerr << "Error receiving data from server" << std::endl;
//         return 1;
//     }

//     // Print received message
//     buffer[bytesReceived] = '\0'; // Null-terminate the received data
//     std::cout << "Response from server: " << buffer << std::endl;

//     // Close socket
//     close(sockfd);

//     return 0;
// }


