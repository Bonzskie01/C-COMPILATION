#include <iostream>
using namespace std;

// Function to set the console text color using ANSI escape codes
void setColor(const string& colorCode) {
    cout << "\033[" << colorCode << "m";
}

// Function to reset the console text color to default
void resetColor() {
    cout << "\033[0m";
}

// Function to print the heart pattern
void printHeart() {
    int n = 6; // Number of rows for the top part of the heart

    // Top part of the heart
    for (int i = n / 2; i <= n; i += 2) {
        // Print spaces before the left V's
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }

        // Print left V's
        setColor("31"); // Set color to red
        for (int j = 1; j <= i; j++) {
            cout << "V";
        }

        // Print spaces between the two halves
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print right V's
        for (int j = 1; j <= i; j++) {
            cout << "V";
        }
        resetColor();
        cout << endl;
    }

    // Bottom part of the heart
    int rowCount = 18; // Number of rows for the bottom part
    for (int i = n; i >= 1; i--) {
        // Print spaces before the V's
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print the V's in the current row
        if (i > n / 2) {
            setColor("35"); // Set color to purple
        } else {
            setColor("33"); // Set color to yellow
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "V";
        }
        resetColor();
        cout << endl;
    }
}

int main() {
    printHeart();
    return 0;
}
