#include <iostream>

using namespace std;

int main ()
{
	int age;
	cout << "Enter age: ";
	cin >> age;
	(age<16) ? cout << "Too young to drive" : (age == 16) ? cout << "Better clear the road" : cout << "You are getting pretty old";
	return 0;
}