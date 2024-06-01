#include <iostream>
using namespace std;

class MyClass {
public:
    // Method overloading
    void print(int num) {
        cout << "Printing integer: " << num << endl;
    }

    void print(double num) {
        cout << "Printing double: " << num << endl;
    }

    void print(string text) {
        cout << "Printing string: " << text << endl;
    }
};

int main() {
    MyClass obj;
    obj.print(5);         // Output: Printing integer: 5
    obj.print(3.14);      // Output: Printing double: 3.14
    obj.print("Hello");   // Output: Printing string: Hello

    return 0;
}
