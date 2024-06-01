// #include <iostream>

// class ShallowCopy {
// private:
//     int *data;

// public:
//     // Constructor
//     ShallowCopy(int d) {
//         data = new int;
//         *data = d;
//     }

//     // Copy constructor (shallow copy)
//     ShallowCopy(const ShallowCopy &other) : data(other.data) {
//         std::cout << "Shallow copy constructor called" << std::endl;
//     }

//     // Getter
//     int getData() const {
//         return *data;
//     }

//     // Destructor
//     ~ShallowCopy() {
//         delete data;
//     }
// };

// int main() {
//     ShallowCopy obj1(10);
//     ShallowCopy obj2 = obj1; // Shallow copy occurs here

//     std::cout << "Data in obj1: " << obj1.getData() << std::endl;
//     std::cout << "Data in obj2: " << obj2.getData() << std::endl;

//     // Modifying data through obj1
//     // *obj1.getData() = 20;

//     std::cout << "Data in obj1 after modification: " << obj1.getData() << std::endl;
//     std::cout << "Data in obj2 after modification: " << obj2.getData() << std::endl;

//     return 0;
// }


#include <iostream>

class DeepCopy {
private:
    int *data;

public:
    // Constructor
    DeepCopy(int d) {
        data = new int;
        *data = d;
    }

    // Copy constructor (deep copy)
    DeepCopy(const DeepCopy &other) {
        data = new int;
        *data = *other.data;
        std::cout << "Deep copy constructor called" << std::endl;
    }

    // Getter
    int getData() const {
        return *data;
    }

    // Destructor
    ~DeepCopy() {
        delete data;
    }
};

int main() {
    DeepCopy obj1(10);
    DeepCopy obj2 = obj1; // Deep copy occurs here

    std::cout << "Data in obj1: " << obj1.getData() << std::endl;
    std::cout << "Data in obj2: " << obj2.getData() << std::endl;

    // Modifying data through obj1
    // *obj1.getData() = 20;

    std::cout << "Data in obj1 after modification: " << obj1.getData() << std::endl;
    std::cout << "Data in obj2 after modification: " << obj2.getData() << std::endl;

    return 0;
}
