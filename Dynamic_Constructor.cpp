#include <iostream>

class DynamicObject {
private:
    int* data;

public:
    DynamicObject(int value) {
        data = new int(value); // Dynamically allocate memory and initialize with value
        std::cout << "Constructor called" << std::endl;
    }

    ~DynamicObject() {
        delete data; // Deallocate memory
        std::cout << "Destructor called" << std::endl;
    }

    void display() {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DynamicObject* objPtr = new DynamicObject(42); // Create object dynamically

    objPtr->display();

    delete objPtr; // Delete object and deallocate memory

    return 0;
}
