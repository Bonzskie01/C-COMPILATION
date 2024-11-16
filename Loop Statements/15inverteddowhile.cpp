#include <iostream>
using namespace std;

int main (){
	int i = 4;
	do {
		int k=4-i;
		do {
			cout << " ";
			k--;
		} while (k>0);
		int j=i;
		do {
			cout <<"*";
			j--;
		} while (j>0);
		cout <<endl;
		i--;
	} while (i>=1);
	return 0;
}
