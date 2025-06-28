#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long minm = min(a, b);
        long long maxgcd = abs(b - a);
        long long gcd = 0;
        long long ans = 0;
        if (maxgcd == 0)
            cout << "0 0" << endl;
        else
        {
            if (minm % maxgcd != 0)
                ans = min(minm % maxgcd, maxgcd - (minm % maxgcd));
            else
                ans = 0;
            cout << maxgcd << " " << ans << endl;
        }
    }
    return 0;
}