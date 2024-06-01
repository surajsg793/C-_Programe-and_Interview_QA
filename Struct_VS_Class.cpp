#include <iostream>
using namespace std;

// Structure example
struct PersonStruct {
    string name;
    int age;
};

// Class example
class PersonClass {
public:
    string name;
    int age;
};

int main() {
    // Structure usage
    PersonStruct personStruct;
    personStruct.name = "John";
    personStruct.age = 30;

    // Class usage
    PersonClass personClass;
    personClass.name = "Alice";
    personClass.age = 25;

    cout << "Structure: " << personStruct.name << ", " << personStruct.age << endl;
    cout << "Class: " << personClass.name << ", " << personClass.age << endl;

    return 0;
}
