#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3, num3 = 7;
    double num4 = 4.5, num5 = 2.3;

    // Call the overloaded functions
    cout << "Sum of two integers: " << add(num1, num2) << endl;       // Calls the first add function
    cout << "Sum of three integers: " << add(num1, num2, num3) << endl; // Calls the second add function
    cout << "Sum of two doubles: " << add(num4, num5) << endl;        // Calls the third add function

    return 0;
}
