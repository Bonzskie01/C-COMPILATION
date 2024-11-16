#include <iostream>

using namespace std;

int main() {
  char ch;
  int count = 0;

  do {
    cout << "Enter a character: ";
    cin >> ch;

    if (ch != 'e') {
      cout << "You entered: " << ch << endl;
      count++;
    }
  } while (count < 5 && ch != 'e');

  cout << "Entered " << count << " characters." << endl;

  return 0;
}

