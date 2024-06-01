#include <iostream>
#include <fstream>

int main() {
    // Create and open a file for writing
    std::ofstream outfile("example.txt");

    // Check if the file is successfully opened
    if (!outfile) {
        std::cerr << "Error opening file for writing" << std::endl;
        return 1;
    }

    // Write data to the file
    outfile << "Hello, file handling in C++!" << std::endl;
    outfile << "This is a new line." << std::endl;

    // Close the file
    outfile.close();

    // Open the file for reading
    std::ifstream infile("example.txt");

    // Check if the file is successfully opened
    if (!infile) {
        std::cerr << "Error opening file for reading" << std::endl;
        return 1;
    }

    // Read data from the file and print it
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    infile.close();

    return 0;
}
