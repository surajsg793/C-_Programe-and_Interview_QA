// #include <iostream>
// using namespace std;

// // Abstract class representing a Shape
// class Shape {
// public:
//     // Pure virtual function to calculate area
//     virtual double calculateArea() = 0;

//     // Pure virtual function to display information about the shape
//     virtual void display() = 0;
// };

// // Concrete class Circle derived from Shape
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     // Implementation of calculateArea for Circle
//     double calculateArea() override {
//         return 3.14 * radius * radius;
//     }

//     // Implementation of display for Circle
//     void display() override {
//         cout << "Circle with radius " << radius << endl;
//     }
// };

// // Concrete class Rectangle derived from Shape
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     // Implementation of calculateArea for Rectangle
//     double calculateArea() override {
//         return length * width;
//     }

//     // Implementation of display for Rectangle
//     void display() override {
//         cout << "Rectangle with length " << length << " and width " << width << endl;
//     }
// };

// int main() {
//     // Creating objects of Circle and Rectangle
//     Circle circle(5.0);
//     Rectangle rectangle(4.0, 6.0);

//     // Using polymorphism to call calculateArea and display methods
//     Shape *shape1 = &circle;
//     Shape *shape2 = &rectangle;

//     cout << "Area of circle: " << shape1->calculateArea() << endl;
//     shape1->display();

//     cout << "Area of rectangle: " << shape2->calculateArea() << endl;
//     shape2->display();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// Abstract class representing a Vehicle
class Vehicle {
protected:
    string model;

public:
    Vehicle(const string& m) : model(m) {}

    // Pure virtual function to calculate mileage
    virtual double calculateMileage() const = 0;

    // Pure virtual function to display information about the vehicle
    virtual void displayInfo() const = 0;
};

// Concrete class Car derived from Vehicle
class Car : public Vehicle {
private:
    double fuelCapacity;
    double fuelConsumption;

public:
    Car(const string& m, double fc, double ff) : Vehicle(m), fuelCapacity(fc), fuelConsumption(ff) {}

    // Implementation of calculateMileage for Car
    double calculateMileage() const override {
        return fuelCapacity / fuelConsumption;
    }

    // Implementation of displayInfo for Car
    void displayInfo() const override {
        cout << "Car Model: " << model << ", Fuel Capacity: " << fuelCapacity << " liters, Fuel Consumption: " << fuelConsumption << " liters/km" << endl;
    }
};

// Concrete class Bicycle derived from Vehicle
class Bicycle : public Vehicle {
private:
    double distanceCovered;

public:
    Bicycle(const string& m, double d) : Vehicle(m), distanceCovered(d) {}

    // Implementation of calculateMileage for Bicycle
    double calculateMileage() const override {
        // Since bicycles don't consume fuel, the mileage is based on distance covered
        return distanceCovered;
    }

    // Implementation of displayInfo for Bicycle
    void displayInfo() const override {
        cout << "Bicycle Model: " << model << ", Distance Covered: " << distanceCovered << " km" << endl;
    }
};

int main() {
    // Creating objects of Car and Bicycle
    Car car("Toyota Camry", 50.0, 10.0);
    Bicycle bicycle("Mountain Bike", 25.0);

    // Using polymorphism to call calculateMileage and displayInfo methods
    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &bicycle;

    cout << "Mileage of car: " << vehicle1->calculateMileage() << " km/l" << endl;
    vehicle1->displayInfo();

    cout << "Mileage of bicycle: " << vehicle2->calculateMileage() << " km" << endl;
    vehicle2->displayInfo();

    return 0;
}
