#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\n";
    cout << "please enter a three digit integer\n";
    cin >> a;
    b = (a/10)/10+(a/10)%10+a%10;
    cout << "the sum of the digits of the integer you entered is " << b;
    return 0;
}
