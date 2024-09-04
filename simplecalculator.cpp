//simple calculator using if and else statement

#include <iostream>

using namespace std;

int main ()
{
	int num1, num2, total;
	int ops;
	
	cout << "---------------------------------------------\n";
	cout << "\tWELCOME TO MY SIMPLE CALCULATOR\n";
	cout << "---------------------------------------------\n";
	cout << "Type your First Number: ";
	cin >> num1;
	cout << "---------------------------------------------\n";
	cout << "Type your Second Number: ";
	cin >> num2;
	cout << "---------------------------------------------\n";
	cout << "Choose your Operator\n";
	cout << "[1] Addition\n";
	cout << "[2] Subtraction\n";
	cout << "[3] Multiplication\n";
	cout << "[4] Division\n";
	cout << "---------------------------------------------\n";
	cout << "Type the number of your Operator: ";
	cin >> ops;
	cout << "---------------------------------------------\n";

	if (ops == 1)
	{
		total = num1 + num2;
		cout << "The Answer is: " << total << endl;
		cout << "THANK YOU! and Gob Bless!"; 
	}	
	else if (ops == 2)
	{
		total = num1 - num2;
		cout << "The Answer is : " << total<< endl;
		cout << "THANK YOU! and Gob Bless!"; 
	}
	else if (ops == 3)
	{
		total = num1 * num2;
		cout << "The Answer is : " << total << endl;
		cout << "THANK YOU! and Gob Bless!"; 
	}
	else if (ops == 4)
	{
		total = num1 / num2; 
		cout << "The Answer is : " << total << endl;
		cout << "THANK YOU! and Gob Bless!"; 
	}
	else
	{
		cout << "Please Try Again";
	}	
}