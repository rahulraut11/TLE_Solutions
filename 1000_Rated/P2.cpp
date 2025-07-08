#include <bits/stdc++.h>
using namespace std;

int solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    long long maxm = 0;
    int even = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxm = max(maxm, a[i] % k);
        if (a[i] % k == 0)
            found = true;
        if (a[i] % 2 == 0)
            even++;
    }
    if (found)
        return 0;
    if (k != 4)
    {
        return k - maxm;
    }
    else
    {
        if (even > 1)
            return 0;
        else if (even == 1 || maxm ==3)
            return 1;
        else
            return 2;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}