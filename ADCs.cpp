#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

// Function to read analog data from ADC
float readAnalogData(int channel) {
    std::string adc_path = "/sys/bus/iio/devices/iio:device0/in_voltage" + std::to_string(channel) + "_raw";
    std::ifstream adc_file(adc_path);

    if (!adc_file) {
        std::cerr << "Error opening ADC file" << std::endl;
        return -1.0f;
    }

    float analog_value;
    adc_file >> analog_value;
    adc_file.close();

    return analog_value;
}

int main() {
    // Read analog data from ADC channel 0
    int channel = 0;
    float analog_value = readAnalogData(channel);

    if (analog_value < 0) {
        std::cerr << "Error reading analog data" << std::endl;
        return 1;
    }

    std::cout << "Analog value from channel " << channel << ": " << analog_value << std::endl;

    return 0;
}
