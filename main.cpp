#include <iostream>
using namespace std;
int main()
{
    int a, b, c, mx;
    cout << " enter a two digit integer\n";
    cin >> a;
    b = a/10;
    c = a%10;
    if (b > c) mx = b;
    if (c > b) mx = c;
    cout << "the maximum digit is " << mx;

    return 0;
}
