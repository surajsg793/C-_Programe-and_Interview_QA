#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
private:
    string type; // private member

protected:
    int maxSpeed; // protected member

public:
    Vehicle(const string& t, int speed) : type(t), maxSpeed(speed) {}

    // Public member function to display information
    void displayInfo() const {
        cout << "Type: " << type << ", Max Speed: " << maxSpeed << " km/h" << endl;
    }

    // Public member function to update max speed
    void setMaxSpeed(int speed) {
        maxSpeed = speed;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string brand; // private member

public:
    Car(const string& t, int speed, const string& b) : Vehicle(t, speed), brand(b) {}

    // Public member function to display information
    void displayCarInfo() const {
        cout << "Brand: " << brand << ", ";
        // cout << "Type: " << type << ", ";
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
    }

    // Public member function to update brand
    void setBrand(const string& b) {
        brand = b;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Sedan", 180, "Toyota");

    // Display information (public member function of base class)
    myCar.displayInfo(); // Output: Type: Sedan, Max Speed: 180 km/h

    // Display information specific to Car (public member function of derived class)
    myCar.displayCarInfo(); // Output: Brand: Toyota, Type: Sedan, Max Speed: 180 km/h

    // Update the max speed (public member function of base class)
    myCar.setMaxSpeed(200);

    // Display updated information
    myCar.displayInfo(); // Output: Type: Sedan, Max Speed: 200 km/h

    // Attempt to access private member directly (not allowed)
    // cout << myCar.brand << endl; // Compilation error

    // Access private member using public member function
    myCar.setBrand("Honda");

    // Display updated brand
    myCar.displayCarInfo(); // Output: Brand: Honda, Type: Sedan, Max Speed: 200 km/h

    // Attempt to access protected member directly (not allowed)
    // cout << myCar.maxSpeed << endl; // Compilation error

    return 0;
}
