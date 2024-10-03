// pattern A

#include <iostream>

using namespace std;

int main()
{
	int scol = 10;
	int ecol = 10;
	for (int currentrow=0; currentrow<=11; currentrow++){ //printing 0-11 rows
		for (int currentcol = 0; currentcol<=20; currentcol++){ //printing 0-20 cols/row
			if (currentrow == 11)
				cout << " @ ";
			else if (currentcol>scol && currentcol<ecol)
				cout << " # ";
			else if (currentcol==scol || currentcol==ecol)
				cout << " * ";
			else 
				cout << "   ";
		}
		scol--;
		ecol++;
		cout << endl;
	}
	return 0;
}