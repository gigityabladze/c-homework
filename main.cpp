#include <iostream>
using namespace std;
int main()
{
    cout << " Please enter a two digit integer.\n";

    int a;
    cin >> a;
    
    int ans = (a%10)*10+a/10;
    cout << "Youre integers digits swapped is: " << ans;
}
