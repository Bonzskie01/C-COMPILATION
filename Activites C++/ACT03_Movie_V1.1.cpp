#include <iostream>

using namespace std;

int main()
{
	int age;
	char wParent;
	string toPrintShow, toPrintMovie;
	cout << "Enter age: ";
	cin >> age;
	if (age < 13) {
		cout << "With Parent [y/n]: ";
		cin >> wParent;
		if (wParent == 'y')
			toPrintShow = "G PG";
		else if (wParent == 'n')
			toPrintShow = "G";
	}
	else if (age < 16) {
		cout << "With Parent [y/n]: ";
		cin >> wParent;
		if (wParent == 'y')
			toPrintShow = "G PG R";
		else if (wParent == 'n')
			toPrintShow = "G PG";
	}
	else if (age >= 16)
		toPrintShow = "G PG R";
	float money;
	cout << "\nEnter the amount of money: $";
	cin >> money;
	if (money >= 7.50) {
		if (money >= 10.50)
			toPrintMovie = "Matinee & Evening";
		else
			toPrintMovie = "Matinee";
	}
	else
		cout << "No Shows";
	return 0;
}
