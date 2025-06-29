#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        long long sum1 = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += ceil(a[i] * 1.0 / x);
            sum1 += a[i];
        }
        sum1 = ceil(sum1 * 1.0 / x);

        cout << sum1 << " " << sum << endl;
    }
}