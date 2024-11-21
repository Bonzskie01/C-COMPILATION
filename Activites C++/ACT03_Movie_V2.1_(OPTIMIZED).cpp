#include <iostream>

using namespace std;

int main()
{
	int age;
	char movie, price;
	string result = "\nG";
	cout << "Enter your age: ";
	cin >> age;
	if (age < 16) {
		cout << "With parent? [y=yes,n=no]: ";
		cin >> movie;
		if (age >= 13) {
			result = result + ", PG";
			if (movie == 'y')	result = result + ", R";
		}
		else
			if (movie == 'y')	result = result + ", PG";
	}
	else
		result = result + ", PG, R";
	cout << "[m]=Matinee, [e]=Evening: ";
	cin >> price;
	if (price == 'm')
		cout << result << "\n$7.50\n";
	else if (price == 'e')
		cout << result << "\n$10.50\n";
	return 0;
}
