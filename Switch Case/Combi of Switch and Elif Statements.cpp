#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    bool validInput = true;

    // Asking the user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    // Switch case to determine the operation
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Additional if-else check to handle division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                validInput = false;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            validInput = false;
    }

    // Additional if-else statement to check if input was valid
    if (validInput) {
        cout << "Calculation completed successfully." << endl;
    } else {
        cout << "Calculation failed due to invalid input." << endl;
    }

    return 0;
}