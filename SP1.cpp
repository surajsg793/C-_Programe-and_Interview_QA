#include <iostream>
#include <SerialPort.h>

int main() {
    // Define the serial port object
    SerialPort sp1;

    // Open the serial port (replace "/dev/ttyUSB0" with your actual device)
    if (!sp1.Open("/dev/ttyUSB0", B9600)) {
        std::cerr << "Error opening serial port" << std::endl;
        return 1;
    }

    // Write data to the serial port
    const char *data = "Hello, SP1!";
    if (!sp1.Write(data)) {
        std::cerr << "Error writing to serial port" << std::endl;
        sp1.Close();
        return 1;
    }

    std::cout << "Data sent: " << data << std::endl;

    // Read data from the serial port
    char buffer[256];
    int bytesRead = sp1.Read(buffer, sizeof(buffer));
    if (bytesRead == -1) {
        std::cerr << "Error reading from serial port" << std::endl;
        sp1.Close();
        return 1;
    }

    buffer[bytesRead] = '\0';
    std::cout << "Data received: " << buffer << std::endl;

    // Close the serial port
    sp1.Close();

    return 0;
}
