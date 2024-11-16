#include <iostream>
using namespace std;
int main()
{	
	int j = 0; 
    while (j <= 5){
		int i = 0;
		while (i <= 5){
			if (i==0){
				cout << i + j << "\t";
			}
			else if (j==0){
				cout << i + j << "\t";
			}
			else{ 
				cout << i * j << "\t";
			}
			i++;
		}
        cout << " " << endl;
		j++;
	}
    return 0;
}