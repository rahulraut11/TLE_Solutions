#include <bits/stdc++.h>
using namespace std;
string solve()
{
    long long n;
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    if (n == 1)
        return "NO";
    else
        return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}