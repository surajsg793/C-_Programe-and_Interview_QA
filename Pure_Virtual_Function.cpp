#include <iostream>

// Abstract Base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Normal member function
    void displayArea() {
        std::cout << "Area: " << calculateArea() << std::endl;
    }

    // Pure virtual function
    virtual double calculateArea() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of pure virtual function
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }

    // Implementation of pure virtual function
    double calculateArea() override {
        return 3.14 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of pure virtual function
    void draw() override {
        std::cout << "Drawing Rectangle" << std::endl;
    }

    // Implementation of pure virtual function
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    // Shape *shape = new Shape(); // Error: Cannot instantiate abstract class

    Circle circle(5.0);
    circle.draw();
    circle.displayArea();

    Rectangle rectangle(4.0, 6.0);
    rectangle.draw();
    rectangle.displayArea();

    return 0;
}
