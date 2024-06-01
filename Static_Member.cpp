#include <iostream>

class MyClass {
public:
    static int staticVariable; // Declaration of a static variable
    
    static void staticMethod() { // Declaration of a static method
        std::cout << "This is a static method" << std::endl;
    }
};

// Definition of the static variable
int MyClass::staticVariable = 0;

int main() {
    MyClass::staticVariable = 10; // Accessing static variable
    std::cout << "Static variable: " << MyClass::staticVariable << std::endl;

    MyClass::staticMethod(); // Calling static method
    
    return 0;
}
