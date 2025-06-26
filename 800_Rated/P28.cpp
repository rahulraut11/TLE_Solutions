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
        vector<int> sum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
        }

        bool fixed = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == sum[i - 1])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[j] != a[i])
                    {
                        swap(a[i], a[j]);
                        fixed = true;
                        break;
                    }
                }
            }
        }
        bool ans = true;
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == sum[i - 1])
                ans = false;
        }
        if (!ans)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}