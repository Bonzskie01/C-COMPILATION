#include <iostream>

using namespace std;

#define CLEARSCREEN system("cls")

int main()
{	
	char account, level;
	float money, total = -1;
	CLEARSCREEN;
	cout << "Type P = Personal , B = Business : ";
	cin >> account;
	if (account == 'P'){
		cout << "Type S = Standard , G = Gold : ";
		cin >> level;
		if (level == 'S'){
			cout << "What is your Balance? ";
			cin >> money;
				if (money >= 0){	
					cout << "Your interest rate is 1.2%\n";
					total = money * .012;
					cout << "Your interest rate for every month is: $" << total << endl;
				}
		}
		else if (level == 'G'){
			cout << "What is your Balance? ";
			cin >> money;	
			if (money >= 5000){	
				cout << "Your interest rate is 2.3%\n";
				total = money * .023;
				cout << "Your interest rate for every month is: $" << total << endl;
			}
			else if (money >= 1000){
				cout << "Your interest rate is 1.9%\n";
				total = money * .019;
				cout << "Your interest rate for every month is: $" << total << endl;
			}
		}
	}	
	else if (account == 'B'){
		cout << "Type S = Standard , P = Platinum : ";
		cin >> level;
		if (level == 'S'){
			cout << "What is your Balance? ";
			cin >> money;
				if (money >= 1500){	
					cout << "Your interest rate is 1.7%\n";
					total = money * .017;
					cout << "Your interest rate for every month is: $" << total << endl;
				}
		}
				else if (level == 'P'){
					cout << "What is your Balance? ";
					cin >> money;
						if(money >= 10000){	
							cout << "Your interest rate is 2.5\n";
							total = money * .025;
							cout << "Your interest rate for every month is: $" << total << endl;
						}
				}
	}
	if (total < 0)
		cout << "ERROR";
}	