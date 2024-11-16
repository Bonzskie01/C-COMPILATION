#include <iostream>

using namespace std;

int main ()
{
    int sum = 0;
    for ( int num = 5; num <=50; num +=3){
        sum += num;
    }
        cout << "The Sum of the Series is: " << sum << endl;
    return 0;
}
