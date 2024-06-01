#include <iostream>

class MyClass; // Forward declaration of MyClass

class FriendClass {
public:
    void accessPrivateMember(MyClass &obj) {
        // Accessing private member of MyClass
        std::cout << "Value of private member in FriendClass: " << obj.privateMember << std::endl;
    }
};

class MyClass {
private:
    int privateMember;

    // Declare FriendClass as a friend
    friend class FriendClass;

public:
    MyClass(int value) : privateMember(value) {}

    // Other member functions
};

int main() {
    MyClass obj(42);
    FriendClass friendObj;

    friendObj.accessPrivateMember(obj);

    return 0;
}
