#include <iostream>
using namespace std;

void outerFunction() {
    // Local class definition
    class LocalClass {
    public:
        void display() {
            cout << "Inside local class" << endl;
        }
    };

    // Create an object of the local class
    LocalClass localObj;
    // Call the member function of the local class
    localObj.display();
}

int main() {
    // Call the outer function
    outerFunction();

    return 0;
}
