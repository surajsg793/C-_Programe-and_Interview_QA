#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function
    virtual void display() {
        cout << "Base class display() called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override the virtual function
    void display() override {
        cout << "Derived class display() called" << endl;
    }
};

int main() {
    Base baseObj;       // Object of base class
    Derived derivedObj; // Object of derived class

    // Call virtual function through base class object
    baseObj.display();  // Output: Base class display() called

    // Call virtual function through derived class object
    derivedObj.display(); // Output: Derived class display() called

    // Call virtual function through base class pointer pointing to derived class object
    Base* ptr = &derivedObj;
    ptr->display();    // Output: Derived class display() called

    return 0;
}
