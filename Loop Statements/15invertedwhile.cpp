#include <iostream>
using namespace std;

int main () {
	int i = 4;
	while (i >=1){
		int k = 4 - i;
		while (k > 0) {
			cout<< " ";
			k--;
		}
		int j = i;
		while (j > 0) {
			cout << "*";
			j--;
		}
		cout << endl;
		i --;
	}
	return 0;
}