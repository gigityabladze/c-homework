#include <iostream>
using namespace std;
int main()
{
    int a, b, c, mx;
    cout << "\nPlease enter three integers.\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
        mx = a;
    
    if (b > a && b > c)
        mx = b;
    
    if (c > a && c > b)
        mx = c;

    cout << "The biggest integer in you're three integer is: " << mx;

    return 0;
}
