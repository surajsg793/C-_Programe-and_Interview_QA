#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int value) {
        this->value = value;
    }

    void printValue() {
        std::cout << "Value: " << this->value << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    obj1.printValue(); // Prints: Value: 10
    obj2.printValue(); // Prints: Value: 20

    return 0;
}
