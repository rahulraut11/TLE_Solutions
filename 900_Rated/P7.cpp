#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int curr_cnt = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            curr_cnt++;
            if (i == n - 1)
                break;
            if (a[i + 1] - a[i] > k)
            {
                cnt = max(cnt, curr_cnt);
                curr_cnt = 0;
            }
        }
        cnt = max(cnt, curr_cnt);
        int ans = n - cnt;
        cout << ans << endl;
    }
    return 0;
}