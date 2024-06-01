#include <iostream>

int main() {
    int num = 10; // Declare and initialize an integer variable
    int *ptr; // Declare a pointer variable of type int

    ptr = &num; // Assign the address of num to the pointer variable

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}
