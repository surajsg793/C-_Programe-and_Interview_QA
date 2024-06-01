#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
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

// Another derived class
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Create objects of both derived classes
    Dog dog;
    Cat cat;

    // Call the overridden function through base class pointers
    Animal* ptr1 = &dog;
    ptr1->makeSound(); // Output: Dog barks

    Animal* ptr2 = &cat;
    ptr2->makeSound(); // Output: Cat meows

    return 0;
}
