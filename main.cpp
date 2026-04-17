#include <iostream>
using namespace std;
int main()
{
    int a, candys;
    cout << "enter the number of candys";
    cin >> candys;
    int player = 1;
    question:
        cout << "player " << player;
        cin >> a;
        if (candys >= a)
        {
            candys = candys-a;
            if (candys == 0)
            {
                cout << "the winner is " << player;
                return 0;
            }
            if (player == 1)
                player = 2;
            else
                player = 1;
            goto question;
        }
        else
            cout << "the winner is " << player;
    return 0;
}
