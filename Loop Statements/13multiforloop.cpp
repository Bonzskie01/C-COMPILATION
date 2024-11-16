#include <iostream>
using namespace std;
int main()
{		
    for (int j = 0; j <= 5; j++){
		cout << j << "\t";
		for (int i = 1; i <= 5; i++){
			if (j==0)
				cout << i + 0 << "\t";
			else 
				cout << i * j << "\t";	 
		}
        cout << endl;
	}
    return 0;
}