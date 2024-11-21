#include <iostream>

using namespace std;

int main()
{
	int age;
	char movie;
	float money;
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
	cout << "The shows is: Matinee & Evening \n";
	cout << "Enter your money: ";	
	cin >> money;
	(money < 7.50) ? cout << result << "\nNot Enough Money" : (money < 10.50) ? cout << result << "\nCan go to Matinee Show" : cout << result << "\nCan go to Matinee & Evening Show";
	return 0;
}
