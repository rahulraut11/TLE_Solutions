#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        ll time = b - 1;
        ll curr_time = 1;
        for (int i = 0; i < n; i++)
        {
            curr_time = min(a, 1 + x[i]);
            curr_time--;
            time += curr_time;
            curr_time = 1;
        }
        cout << time + 1 << endl;
    }
    return 0;
}