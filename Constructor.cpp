#include <iostream>
#include <string>
using namespace std;

// Class definition
class Person {
private:
    string name;
    int age;

public:
    // Constructor with parameters
    Person(const string& n, int a) : name(n), age(a) {
        cout << "Constructor called for " << name << endl;
    }

    // Default constructor
    Person() : name("John Doe"), age(30) {
        cout << "Default constructor called for " << name << endl;
    }

    // Display information method
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Person person1("Alice", 25);   // Constructor with parameters called
    Person person2;                // Default constructor called

    // Displaying information
    person1.displayInfo();
    person2.displayInfo();

    return 0;
}
