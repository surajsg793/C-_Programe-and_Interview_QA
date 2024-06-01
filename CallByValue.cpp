#include <iostream>

// Function to increment a value by 1 using call by value
void incrementByValue(int x) {
    x++; // Increment the copy of x
}

int main() {
    int num = 5;

    std::cout << "Before incrementByValue: " << num << std::endl;
    incrementByValue(num);
    std::cout << "After incrementByValue: " << num << std::endl;

    return 0;
}
