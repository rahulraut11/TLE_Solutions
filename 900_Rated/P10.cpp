/* We have to find if sum is odd or even.

Final sum = initial sum - (sum till R - sum till L-1) + k*(R-L+1)  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1);
        vector<ll> sum(n + 1);
        sum[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = sum[n] - (sum[r] - sum[l - 1]) + k * (r - l + 1);
            if (ans % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}