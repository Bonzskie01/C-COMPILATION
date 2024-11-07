#include <iostream>

using namespace std;

int main()
{
	char answer;
	
	cout << "Is it raining [y/n]?" << endl;
	cin >> answer;
	
	if (answer == 'y'){
		cout << "Get an umbrella";
	}
	else { 
		cout << "It is sunny";
	}
	return 0;
}