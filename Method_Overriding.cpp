#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual method
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the virtual method
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr = new Dog(); // Base class pointer pointing to derived class object
    ptr->makeSound(); // Output: Dog barks

    delete ptr;

    return 0;
}
