#include <iostream>

using namespace std;

int main() {
  int num = 10;
  while (num >= 0) {
    if (num != 5) {
      cout << num << " ";
    }
    num--;
  }
  cout << endl;
  return 0;
}

