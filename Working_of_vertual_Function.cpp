#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "Displaying from Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Displaying from Derived class" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Calls the appropriate display function based on the object type
    basePtr->display(); 

    return 0;
}
