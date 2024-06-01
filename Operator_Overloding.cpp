#include <iostream>
using namespace std;

// Class representing a complex number
class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Operator overloading for addition (+)
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2; // Operator overloading for addition

    cout << "Sum: ";
    sum.display(); // Output: 4.5 + 6.5i

    return 0;
}
