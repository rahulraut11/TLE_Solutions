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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 1;
        int maxcnt = 1;
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt++;
            else
                cnt = 1;
            maxcnt = max(maxcnt, cnt);
        }
        int dble = 0;
        int need = n - maxcnt;
        if (n == 1 || need == 0)
            cout << "0" << endl;
        else
        {
            while (maxcnt < n)
            {
                maxcnt *= 2;
                dble++;
            }
            int ans = need + dble;
            cout << ans << endl;
        }
    }
    return 0;
}