// #include <iostream>

// class MyClass {
// public:
//     // Default constructor
//     MyClass() {
//         std::cout << "Default constructor called" << std::endl;
//     }
// };

// int main() {
//     MyClass obj; // Creating an object of MyClass, calls the default constructor
//     return 0;
// }


// #include <iostream>

// class MyClass {
// private:
//     int value;

// public:
//     // Parameterized constructor
//     MyClass(int v) : value(v) {
//         std::cout << "Parameterized constructor called with value: " << value << std::endl;
//     }

//     int getValue() {
//         return value;
//     }
// };

// int main() {
//     MyClass obj(10); // Creating an object of MyClass with a parameterized constructor
//     std::cout << "Value: " << obj.getValue() << std::endl;
//     return 0;
// }


#include <iostream>

class MyClass {
private:
    int value;

public:
    // Parameterized constructor
    MyClass(int v) : value(v) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass &other) : value(other.value) {
        std::cout << "Copy constructor called" << std::endl;
    }

    int getValue() {
        return value;
    }
};

int main() {
    MyClass obj1(10); // Creating an object of MyClass with a parameterized constructor
    MyClass obj2 = obj1; // Creating obj2 using copy constructor
    std::cout << "Value of obj2: " << obj2.getValue() << std::endl;
    return 0;
}
