#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        fo(i, n)
        {
            cin >> a[i];
            int ans = n - a[i] + 1 ;
            cout << ans << " " ;
        }
        cout << endl ;
    }
    return 0;
}