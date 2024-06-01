#include <iostream>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main() {
    const char *device = "/dev/i2c-1"; // I2C bus device (change to the appropriate device)

    // Open the I2C bus
    int i2c_fd = open(device, O_RDWR);
    if (i2c_fd == -1) {
        std::cerr << "Error opening I2C bus" << std::endl;
        return 1;
    }

    // Set the I2C slave address (replace 0x50 with the address of your device)
    int slave_address = 0x50;
    if (ioctl(i2c_fd, I2C_SLAVE, slave_address) < 0) {
        std::cerr << "Error setting I2C slave address" << std::endl;
        close(i2c_fd);
        return 1;
    }

    // Write data to the I2C device
    const char *data_write = "Hello, I2C!";
    if (write(i2c_fd, data_write, strlen(data_write)) != strlen(data_write)) {
        std::cerr << "Error writing to I2C device" << std::endl;
        close(i2c_fd);
        return 1;
    }

    std::cout << "Data sent: " << data_write << std::endl;

    // Read data from the I2C device
    char data_read[256];
    if (read(i2c_fd, data_read, sizeof(data_read)) < 0) {
        std::cerr << "Error reading from I2C device" << std::endl;
        close(i2c_fd);
        return 1;
    }

    std::cout << "Data received: " << data_read << std::endl;

    // Close the I2C bus
    close(i2c_fd);

    return 0;
}
