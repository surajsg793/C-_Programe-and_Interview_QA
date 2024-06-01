#include <iostream>

int main() {
    int num = 10; // Declare and initialize an integer variable
    int &ref = num; // Declare and initialize a reference to num

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;
    std::cout << "Address of ref: " << &ref << std::endl;

    // Changing the value of num through the reference
    ref = 20;

    std::cout << "\nAfter changing the value through the reference:" << std::endl;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    return 0;
}
