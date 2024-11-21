#include <iostream>

using namespace std;

#define CLEARSCREEN system("cls")

int main()
{	
	char answer, level;
	float money, result2 = -1;
	CLEARSCREEN;
	cout << "TYPE OF ACCOUNT [P=Personal | B = Business]: ";
	cin >> answer;
	if ((answer == 'P') || (answer == 'B')){ 
	cout << "If Personal [S= Standard | G= Gold] If Business [S=Standard | P = Platinum]]: ";
		cin >> level;
	}
	if ((level == 'S') || (answer == 'P') && (level == 'G') || ((answer == 'B') && (level == 'P'))){ 
		cout << "TYPE YOUR BALANCE: ";
		cin >> money;
	}
	if ((answer == 'P') && (money >= 0) && (level == 'S')) result2 = 1.2;
	else if ((answer == 'P') && (money >= 5000) && (level == 'G')) result2 = 2.3;
	else if ((answer == 'P') && (money >= 1000) && (level == 'G')) result2 = 1.9;
	else if ((answer == 'B') && (money >= 1500) && (level == 'S')) result2 = 1.7;
	else if ((answer == 'B') &&  (money >= 10000) && (level == 'P')) result2 = 2.5;
	
	if ((result2 < 0) || !(money > 0)) 
		cout << "ERROR";
	else{ 
		cout << "Your balance is: " << money << endl;
		cout << "Your Interest Rate is: "<< result2 << endl;
		cout << "Your Interest is: " << (money / 100) * result2 << endl;
	}
	return 0;
}