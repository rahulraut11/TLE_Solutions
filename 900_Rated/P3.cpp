/* We have to choose k distinct numbers from 1 to n such that sum will be x

First find minimum and maximum sum you can obtain if you select k distinct numbers from 1 to n.

Now if x is between min sum and max sum then answer is YES else NO
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long minsum = k * (k + 1) / 2;
        long long maxsum = k * (2 * n + 1 - k) / 2;
        if (x <= maxsum && x >= minsum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}