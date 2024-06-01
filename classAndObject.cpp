// #include <iostream>
// using namespace std;

// // Define a class called Person
// class Person {
// private:
//     string name;
//     int age;

// public:
//     // Constructor to initialize the name and age
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }

//     // Function to display information about the person
//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     // Create an object of the Person class
//     Person person1("Alice", 30);

//     // Call the displayInfo function of the object
//     person1.displayInfo();

//     // Create another object of the Person class
//     Person person2("Bob", 25);

//     // Call the displayInfo function of the second object
//     person2.displayInfo();

//     return 0;
// }


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void celebrateBirthday() {
        age++;
        cout << name << " is celebrating their birthday! Now " << name << " is " << age << " years old." << endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1("Alice", 30);

    // Call the displayInfo function of the object
    person1.displayInfo();

    // Update the person's age
    person1.setAge(31);

    // Call the displayInfo function again
    person1.displayInfo();

    // Create another object of the Person class
    Person person2("Bob", 25);

    // Call the displayInfo function of the second object
    person2.displayInfo();

    // Accessing object properties using getter functions
    cout << "Name: " << person2.getName() << ", Age: " << person2.getAge() << endl;

    // Celebrate Bob's birthday
    person2.celebrateBirthday();

    return 0;
}
