#include <iostream>
using namespace std;
int main()
{	
	int j = 0; 
    do{
		int i = 0;
			do{
				if (i==0){
					cout << i + j << "\t";
				}
				else if (j==0){
					cout << i + j << "\t";
				}
				else{ 
					cout << i * j << "\t";
				}i++;
		}while (i <= 5);
        cout << " " << endl;
		j++;
	}while (j <= 5);
    return 0;
}