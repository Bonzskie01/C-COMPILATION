#include <iostream>

using namespace std;

int main() {
  char ch;
  int count = 0;

  while (count < 5) {
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'e') {
      break;  // Exit the loop if 'e' is entered
    }

    cout << "You entered: " << ch << endl;
    count++;
  }

  cout << "Entered " << count << " character." << endl;

  return 0;
}
