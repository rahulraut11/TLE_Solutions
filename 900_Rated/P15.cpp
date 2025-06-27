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
        vector<long long> a(n);
        bool x = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = n - 1; i > 0; i--)
        {
            while (a[i] <= a[i - 1])
            {
                a[i - 1] /= 2;
                cnt++;
                if (a[i - 1] == 0)
                    break;
            }
            if (a[i] == 0 && a[i - 1] == 0)
            {
                cnt = -1;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}