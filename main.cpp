#include <iostream>
using namespace std;
int main()
{
    cout << "\nPlease enter a 4 digit integer\n";

    int a;
    cin >> a;
    
    int ans = (a/10)/10%10+(a/10)%10;
    cout << "\nThe sum of the middle numbers in your integer is: " << ans;
}
