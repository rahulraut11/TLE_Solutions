/* We first add +1 to all the 1s present in initial array since 1 will always divide the next number.

Then for each discrepancy , add 1 in i+1 element */
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
        int cnt = 0;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                a[i]++;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i + 1] % a[i] == 0)
            {
                a[i + 1]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}