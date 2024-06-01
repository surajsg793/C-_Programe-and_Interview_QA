// #include <iostream>
// using namespace std;

// // Function that throws an exception
// void divide(int num, int denom) {
//     if (denom == 0) {
//         throw "Division by zero error";
//     }
//     cout << "Result of division: " << num / denom << endl;
// }

// int main() {
//     int numerator, denominator;

//     cout << "Enter the numerator: ";
//     cin >> numerator;
//     cout << "Enter the denominator: ";
//     cin >> denominator;

//     try {
//         // Attempt the division operation
//         divide(numerator, denominator);
//     }
//     catch (const char* error) {
//         // Catch the exception and handle it
//         cout << "Exception caught: " << error << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <stdexcept> // Include the standard exception classes
using namespace std;

// Function that throws different types of exceptions
void processInput(int num) {
    if (num < 0) {
        throw out_of_range("Input value is out of range");
    }
    else if (num == 0) {
        throw invalid_argument("Input value is invalid");
    }
    else {
        cout << "Input value is valid: " << num << endl;
    }
}

int main() {
    int userInput;

    cout << "Enter a positive integer (0 to exit): ";
    while (true) {
        try {
            cin >> userInput;
            if (userInput == 0) {
                break; // Exit loop if user enters 0
            }
            processInput(userInput); // Attempt to process input
        }
        catch (const out_of_range& e) {
            cout << "Exception caught: " << e.what() << endl;
            cout << "Please enter a positive integer" << endl;
        }
        catch (const invalid_argument& e) {
            cout << "Exception caught: " << e.what() << endl;
            cout << "Please enter a non-zero positive integer" << endl;
        }
        catch (...) {
            cout << "Unknown exception caught" << endl;
            // Handle any other types of exceptions
        }
        cin.clear(); // Clear input stream flags
        // cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard remaining input
        cout << "Enter a positive integer (0 to exit): ";
    }

    return 0;
}
