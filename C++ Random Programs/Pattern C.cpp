//patternC
#include <iostream>

using namespace std;

int main()
{
	int scol = -1;
	int ecol = 21;
	int currentrow = 0;
	int currentcol = 0;
	
	for (currentrow; currentrow<=11; currentrow++){ //printing 0-11 rows
		for (int currentcol=0; currentcol<=20; currentcol++){ //printing 0-20 cols/row
			if (currentrow == 0)
				cout << " @ ";
			else if (currentcol>scol && currentcol<ecol)
				cout << " # ";
			else if (currentcol==scol || currentcol==ecol)
				cout << " * ";
			else 
				cout << "   ";
		}
		scol++;
		ecol--;
		cout << endl;
	}
	return 0;
}