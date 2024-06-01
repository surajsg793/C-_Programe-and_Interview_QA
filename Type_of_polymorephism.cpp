// #include <iostream>
// using namespace std;

// // Function overloading
// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a + b;
// }

// int main() {
//     int sum1 = add(5, 3);           // Calls the first add function
//     double sum2 = add(4.5, 3.2);    // Calls the second add function

//     cout << "Sum 1: " << sum1 << endl;  // Output: Sum 1: 8
//     cout << "Sum 2: " << sum2 << endl;  // Output: Sum 2: 7.7

//     return 0;
// }


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

int main() {
    Animal* ptr;
    Dog dog;

    ptr = &dog;  // Assign address of derived class object to base class pointer

    // Call virtual function using base class pointer
    ptr->makeSound(); // Output: Dog barks

    return 0;
}
