#include <iostream>

using namespace std;

int main ()
{
    int sum = 0, num = 5;
    do{
        sum += num;
        num += 3;
    } while (num <= 50);
    cout << "The Sum of the Series: " << sum << endl;
    return 0;
}

