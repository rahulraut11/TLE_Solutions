#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int x = n;
    int power2 = 0;
    int power3 = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        power2++;
    }
    while (x % 3 == 0)
    {
        x /= 3;
        power3++;
    }
    if (x != 1)
        return -1;
    if (power3 < power2)
        return -1;
    else if (power3 == power2)
        return power3;
    else
        return (2 * power3 - power2);
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