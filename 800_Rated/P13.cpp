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
        sort(a.begin(), a.end());
        int count_min = 0;
        for (int x : a)
        {
            if (x == a[0])
                count_min++;
            else
                break;
        }
        if (count_min == n)
            cout << -1 << endl;
        else
        {
            cout << count_min << " " << n - count_min << endl;
            for (int i = 0; i < count_min; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (int i = count_min; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
