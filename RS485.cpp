#include <iostream>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

int main() {
    const char *device = "/dev/ttyUSB0"; // Change this to your RS-485 device

    // Open the serial port
    int fd = open(device, O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (fd == -1) {
        std::cerr << "Error opening serial port" << std::endl;
        return 1;
    }

    // Configure serial port settings
    struct termios tty;
    if (tcgetattr(fd, &tty) != 0) {
        std::cerr << "Error getting serial port attributes" << std::endl;
        close(fd);
        return 1;
    }

    // Set baud rate
    cfsetospeed(&tty, B9600);
    cfsetispeed(&tty, B9600);

    // Set data bits
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;

    // Set parity
    tty.c_cflag &= ~PARENB;

    // Set stop bits
    tty.c_cflag &= ~CSTOPB;

    // Enable receiver and set local mode
    tty.c_cflag |= (CLOCAL | CREAD);

    // Set input mode (non-canonical, no echo)
    tty.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);

    // Set output mode (raw output)
    tty.c_oflag &= ~OPOST;

    // Set minimum characters for non-canonical read
    tty.c_cc[VMIN] = 0;

    // Set timeout for non-canonical read
    tty.c_cc[VTIME] = 10; // 1 second timeout

    // Apply settings
    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        std::cerr << "Error setting serial port attributes" << std::endl;
        close(fd);
        return 1;
    }

    // Write data to RS-485 device
    const char *data = "Hello, RS-485!";
    int bytesWritten = write(fd, data, strlen(data));
    if (bytesWritten == -1) {
        std::cerr << "Error writing to serial port" << std::endl;
        close(fd);
        return 1;
    }

    std::cout << "Data sent: " << data << std::endl;

    // Read data from RS-485 device
    char buffer[256];
    int bytesRead = read(fd, buffer, sizeof(buffer));
    if (bytesRead == -1) {
        std::cerr << "Error reading from serial port" << std::endl;
        close(fd);
        return 1;
    }

    buffer[bytesRead] = '\0';
    std::cout << "Data received: " << buffer << std::endl;

    // Close the serial port
    close(fd);

    return 0;
}
