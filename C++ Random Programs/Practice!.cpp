#include <iostream>

using namespace std;

int main()
{
	string name;
	int age, number1, number2;
	float kilograms;
	int sum, difference, product, remainder;
	float quotient;
	cout << "Enter Your Name: ";
	cin >> name;
	cout << name << endl;
	cout << "Enter Your Age: ";
	cin >> age;
	cout << age << endl;
	cout << "What is your weight?: ";
	cin >> kilograms;
	cout << "Type Two Number \n";
	cout << "1st Number: ";
	cin >> number1;
	cout << "2nd Number: ";
	cin >> number2;
	sum = number1 + number2;
	cout << "The sum of two numbers is: " << sum << endl;
	difference = number1 - number2;
	cout << "The difference of two numbers is: " << difference << endl;
	product = number1 * number2;
	cout << "The product of two numbers is: " << product << endl;
	quotient = number1 % number2;
	cout << "The quotient of two numbers is: " << quotient << endl;
	remainder = number1 / number2;
	cout << "The remainder of two numbers is: " << remainder << endl;
	return 0;
}