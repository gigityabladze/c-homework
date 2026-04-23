#include <iostream>
using namespace std;
int main()
{
    int n, m, ans;
    cin >> m >> n;
    if (n > m)
    {
        ans = n - m;
    }
    if (m > n) 
    {
        cout << "Impossible";
        return 0;
    }
    if (m == n && m != 0 && n != 0) 
    {
        cout << "Impossible";
        return 0;
    }
    if (m == 0 && n == 0)
    {
        ans = n - m;
    }
    cout << ans;
    return 0;
}



// 0≤m≤n≤100

// m n
// 0 0
// 0 1
// 0 2
// 0 3
// .
// .
// .
// 0 100

// 1 1
// 1 2
// 1 3
// 1 4
// .
// .
// .
// 1 100

// 2 2 
// 2 3
// 2 4
// .
// 2 100

// 3 3