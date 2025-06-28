#include <bits/stdc++.h>
using namespace std;
bool powerof2(int x)
{
    return x && !(x & (x - 1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int max2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = a[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & a[i];
        }

        cout << ans << endl;
    }
    return 0;
}