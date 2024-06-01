#include <iostream>

// Function to increment a value by 1 using call by reference
void incrementByReference(int& x) {
    x++; // Increment the original x
}

int main() {
    int num = 5;

    std::cout << "Before incrementByReference: " << num << std::endl;
    incrementByReference(num);
    std::cout << "After incrementByReference: " << num << std::endl;

    return 0;
}
