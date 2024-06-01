// #include <iostream>
// #include <string>
// using namespace std;

// // Base class
// class Vehicle {
// protected:
//     string brand;

// public:
//     Vehicle(const string& b) : brand(b) {}

//     void honk() const {
//         cout << "Tuut, tuut!" << endl;
//     }
// };

// // Derived class
// class Car : public Vehicle {
// private:
//     string model;

// public:
//     Car(const string& b, const string& m) : Vehicle(b), model(m) {}

//     void displayInfo() const {
//         cout << "Brand: " << brand << ", Model: " << model << endl;
//     }
// };

// int main() {
//     // Create an object of the derived class Car
//     Car myCar("Toyota", "Camry");

//     // Call methods from the base and derived classes
//     myCar.honk();        // Output: Tuut, tuut!
//     myCar.displayInfo(); // Output: Brand: Toyota, Model: Camry

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(const string& b) : brand(b) {}

    void honk() const {
        cout << "Tuut, tuut!" << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string model;

public:
    Car(const string& b, const string& m) : Vehicle(b), model(m) {}

    void displayInfo() const {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

// Further derived class
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(const string& b, const string& m, int capacity) : Car(b, m), batteryCapacity(capacity) {}

    void displayBatteryInfo() const {
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    // Create an object of the further derived class ElectricCar
    ElectricCar myElectricCar("Tesla", "Model S", 100);

    // Call methods from all levels of inheritance
    myElectricCar.honk();            // Output: Tuut, tuut!
    myElectricCar.displayInfo();     // Output: Brand: Tesla, Model: Model S
    myElectricCar.displayBatteryInfo(); // Output: Battery Capacity: 100 kWh

    return 0;
}
