/* We have to find max of a[n] - a[1] ;

There are 3 cases ;

1) Fix the position of a1 and then for all other elements find the max ai - a1 ;

2)Fix the position of an and then for all other elements find the max an - ai ;

3)Take the whole array in operation , this  means we make adjacent elements i.e. a[i] and a[i+1] as a[n] and a[1] respectively. so find max an - a1 for these as well.

Whatever is max from all these cases is the answer */

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = a[n - 1] - a[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] - a[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}