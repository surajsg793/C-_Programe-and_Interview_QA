#include <iostream>
#include <string>
using namespace std;

// Class definition
class Person {
private:
    string name;

public:
    // Constructor
    Person(const string& n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Display information method
    void displayInfo() const {
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Creating objects
    Person* person1 = new Person("Alice");
    Person person2("Bob");

    // Displaying information
    person1->displayInfo();
    person2.displayInfo();

    // Deleting dynamically allocated object
    delete person1;

    return 0;
}
