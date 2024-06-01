#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    // Static binding (early binding)
    void speak() {
        cout << "Animal speaks" << endl;
    }

    // Virtual function for dynamic binding (late binding)
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Static binding (early binding)
    Animal animal;
    animal.speak(); // Output: Animal speaks

    // Dynamic binding (late binding)
    Dog dog;
    dog.makeSound(); // Output: Dog barks

    // Virtual table (vtable) binding
    Animal* ptr = &dog;
    ptr->makeSound(); // Output: Dog barks

    return 0;
}
