#include <iostream>

class MyClass {
public:
    static int staticVariable; // Declaration of a static variable
    
    void printStaticVariable() {
        std::cout << "Static variable value: " << staticVariable << std::endl;
    }
};

// Definition of the static variable
int MyClass::staticVariable = 5;

int main() {
    MyClass obj1, obj2;
    
    obj1.printStaticVariable(); // Outputs: Static variable value: 5
    obj2.printStaticVariable(); // Outputs: Static variable value: 5
    
    // Modifying the static variable using one of the objects
    obj1.staticVariable = 10;
    
    obj1.printStaticVariable(); // Outputs: Static variable value: 10
    obj2.printStaticVariable(); // Outputs: Static variable value: 10
    
    return 0;
}
