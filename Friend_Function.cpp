#include <iostream>

class MyClass {
private:
    int privateMember;

    // Declare the friend function
    friend void friendFunction(MyClass &obj);

public:
    MyClass(int value) : privateMember(value) {}

    int getPrivateMember() const {
        return privateMember;
    }
};

// Definition of the friend function
void friendFunction(MyClass &obj) {
    // Accessing private member of MyClass
    std::cout << "Value of private member in friendFunction: " << obj.privateMember << std::endl;
}

int main() {
    MyClass obj(42);

    // Call the friend function
    friendFunction(obj);

    return 0;
}
