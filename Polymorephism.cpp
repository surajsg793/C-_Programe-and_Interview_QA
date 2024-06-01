// #include <iostream>
// using namespace std;

// // Base class Shape
// class Shape {
// public:
//     // Virtual function for calculating area
//     virtual double calculateArea() const = 0;

//     // Virtual function for displaying shape information
//     virtual void display() const = 0;
// };

// // Derived class Rectangle
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     // Implementation of calculateArea for Rectangle
//     double calculateArea() const override {
//         return length * width;
//     }

//     // Implementation of display for Rectangle
//     void display() const override {
//         cout << "Rectangle with length " << length << " and width " << width << endl;
//     }
// };

// // Derived class Circle
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     // Implementation of calculateArea for Circle
//     double calculateArea() const override {
//         return 3.14 * radius * radius;
//     }

//     // Implementation of display for Circle
//     void display() const override {
//         cout << "Circle with radius " << radius << endl;
//     }
// };

// // Function to display area of any shape
// void displayArea(const Shape& shape) {
//     cout << "Area of ";
//     shape.display();
//     cout << "is: " << shape.calculateArea() << endl;
// }

// int main() {
//     // Creating objects of Rectangle and Circle
//     Rectangle rectangle(4.0, 6.0);
//     Circle circle(5.0);

//     // Using polymorphism to call calculateArea and display methods
//     displayArea(rectangle);
//     displayArea(circle);

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

// Base class Animal
class Animal {
protected:
    string name;

public:
    Animal(const string& n) : name(n) {}

    // Virtual function for making a sound
    virtual void makeSound() const = 0;

    // Virtual function for displaying information
    virtual void displayInfo() const {
        cout << "Animal: " << name << endl;
    }
};

// Derived class representing a Dog
class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}

    // Implementation of makeSound for Dog
    void makeSound() const override {
        cout << "Woof!" << endl;
    }

    // Overriding displayInfo to provide additional information
    void displayInfo() const override {
        cout << "Dog: " << name << endl;
    }
};

// Derived class representing a Cat
class Cat : public Animal {
public:
    Cat(const string& n) : Animal(n) {}

    // Implementation of makeSound for Cat
    void makeSound() const override {
        cout << "Meow!" << endl;
    }

    // Overriding displayInfo to provide additional information
    void displayInfo() const override {
        cout << "Cat: " << name << endl;
    }
};

// Function to make an animal sound
void makeAnimalSound(const Animal& animal) {
    cout << "The sound of ";
    animal.displayInfo();
    cout << "is: ";
    animal.makeSound();
}

int main() {
    // Creating objects of Dog and Cat
    Dog dog("Buddy");
    Cat cat("Whiskers");

    // Using polymorphism to call makeSound and displayInfo methods
    makeAnimalSound(dog);
    makeAnimalSound(cat);

    return 0;
}
