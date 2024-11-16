#include <iostream>

using namespace std;

int main ()
{
    int sum = 0, num = 5;

    while (num <= 50){
        sum += num;
        num += 3;
    }
    cout << "The Sum of the Series: " << sum << endl;
    return 0;
}
