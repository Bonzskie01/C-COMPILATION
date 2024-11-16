#include <iostream>

using namespace std;

int main()
{
  int num = 10;
  while (num >= 0) {
      cout << num << endl;
      num -=2;  // Increment by 2 to print only even numbers
	}
  return 0;
}