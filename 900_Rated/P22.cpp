#include <bits/stdc++.h>
using namespace std;
long long solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    long long cnt1 = 0;
    long long cnt0 = 0;
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1)
            cnt1++;
        if (a[i] == 0)
            cnt0++;
    }
    if (sum < 1)
        return 0;
    else if (sum == 1)
    {
        if (cnt0 != 0)
            return pow(2, cnt0);
        else
            return 1;
    }
    else
    {
        if (cnt0 != 0)
            return cnt1 * pow(2, cnt0);
        else
            return cnt1;
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