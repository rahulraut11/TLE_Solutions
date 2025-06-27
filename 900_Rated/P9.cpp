/* we have to get max K such that j - i = k then only we can swap elements for sorting.

We use 1 based array , so for a permutation n , all elements value will be their index value.

i.e. every a[i]=i

From given array, for all elements, we calculate abs(i - a[i]) this gives us the distance by which a[i] is in wrong position.

now by taking gcd of all these values we get the greatest number we can use to make swaps. */

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
        vector<int> p(n + 1);
        int gcd = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            gcd = __gcd(gcd, abs(p[i] - i));
        }
        cout << gcd << endl;
    }
    return 0;
}