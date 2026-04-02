#include <iostream>
using namespace std;
int main()
{
    int a, ans;
    cin >> a;
    ans = a/10+a%10;
    cout << "the sum of the two digits in the integer is" << ans;
    return 0;
}