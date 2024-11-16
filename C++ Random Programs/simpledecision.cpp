//Simple Decision Making

#include <iostream>

using namespace std;

int main ()
{
	string answer;
	cout << "---------------------------------------------\n";
	cout << "Hi! You want to buy an ice cream?\n";
	cout << "---------------------------------------------\n";
	cout << "Type YES or NO\n";
	cout << "---------------------------------------------\n";
	cin >> answer;
	
	if (answer == "YES")
		cout << "OKAY YOU CAN BUY AT ICE CREAM SHOP NEARBY\n";
	else 
		cout << "OKAY, HAVE A GREAT DAY!\n";
	return 0;
}
	