#include <iostream>

using namespace std;

int main() {
  int num = 10;
  do {
    cout << num << endl;
    num -=2;  // Increment by 2 to print only even numbers
  } while (num >= 0);
  return 0;
}


