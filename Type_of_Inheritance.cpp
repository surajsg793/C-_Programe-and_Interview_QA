#include <iostream>
#include <string>
using namespace std;

// Base class for single inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Derived class for single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Base class for multiple inheritance
class FlyingAnimal {
public:
    void fly() {
        cout << "FlyingAnimal flies" << endl;
    }
};

// Base class for multiple inheritance
class SwimmingAnimal {
public:
    void swim() {
        cout << "SwimmingAnimal swims" << endl;
    }
};

// Derived class for multiple inheritance
class Duck : public FlyingAnimal, public SwimmingAnimal {
public:
    void quack() {
        cout << "Duck quacks" << endl;
    }
};

// Base class for multilevel inheritance
class Shape {
public:
    void draw() {
        cout << "Shape is drawn" << endl;
    }
};

// Intermediate derived class for multilevel inheritance
class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Circle is drawn" << endl;
    }
};

// Derived class for multilevel inheritance
class ColoredCircle : public Circle {
public:
    void drawColoredCircle() {
        cout << "ColoredCircle is drawn" << endl;
    }
};

// Base class for hierarchical inheritance
class Vehicle {
public:
    void move() {
        cout << "Vehicle moves" << endl;
    }
};

// Derived class 1 for hierarchical inheritance
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car drives" << endl;
    }
};

// Derived class 2 for hierarchical inheritance
class Truck : public Vehicle {
public:
    void haul() {
        cout << "Truck hauls" << endl;
    }
};

int main() {
    // Single inheritance
    Dog dog;
    dog.eat();  // Output: Animal eats
    dog.bark(); // Output: Dog barks

    // Multiple inheritance
    Duck duck;
    duck.fly();  // Output: FlyingAnimal flies
    duck.swim(); // Output: SwimmingAnimal swims
    duck.quack();// Output: Duck quacks

    // Multilevel inheritance
    ColoredCircle cc;
    cc.draw();           // Output: Shape is drawn
    cc.drawCircle();     // Output: Circle is drawn
    cc.drawColoredCircle(); // Output: ColoredCircle is drawn

    // Hierarchical inheritance
    Car car;
    car.move(); // Output: Vehicle moves
    car.drive();// Output: Car drives

    Truck truck;
    truck.move(); // Output: Vehicle moves
    truck.haul();// Output: Truck hauls

    return 0;
}
