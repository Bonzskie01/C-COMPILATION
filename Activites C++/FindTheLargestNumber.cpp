#include <iostream>
using namespace std;

int main() {
    int A, B, C;
	int largest;

    cout << "Enter the first number: ";
    cin >> A;
	cout << "Enter the second number: ";
	cin >> B;
	cout << "Enter the third number: ";
	cin >> C;
    
    if (A >= B && A >= C) {
        largest = A;
    } else if (B >= A && B >= C) {
        largest = B;
    } else {
        largest = C;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
