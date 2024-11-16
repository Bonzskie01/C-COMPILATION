#include <iostream>

using namespace std;

int main()
{
  char ch;
  for (int num = 0; num < 5; num++) {
    cout << "Enter a character: ";
    cin >> ch;
	cout << "You entered: " << ch << endl;

    if (ch == 'e') {
      break;  // Exit the loop if 'e' is entered
	}
	cout << "Entered " << num << " characters." << endl;
  } 
  return 0;
}

