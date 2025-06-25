#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int ans = 0 - sum;
        cout << ans << endl;
    }
    return 0;
}
