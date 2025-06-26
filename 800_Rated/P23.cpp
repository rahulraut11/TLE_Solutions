#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b)
        return -1;
    else if (d == b && c > a)
        return -1;
    else if (d == b && c <= a)
        return (a - c);
    else
    {
        int ansY = d - b;
        int newX = a + ansY;
        if (newX < c)
            return -1;
        else
        {
            int ansX = newX - c;
            return (ansX + ansY);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}