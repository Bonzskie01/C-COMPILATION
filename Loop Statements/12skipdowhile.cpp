#include <iostream>

using namespace std;

int main() {
  int num = 10;
  do {
    if (num != 5) {
      cout << num << " ";
    }
    num--;
  } while (num >= 0);
  cout << endl;
  return 0;
}

