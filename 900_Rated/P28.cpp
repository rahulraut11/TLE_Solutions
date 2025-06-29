#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int med = n * k;
        vector<long long> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        long long x = n / 2 + 1;
        long long sum = 0;
        while (k--)
        {
            med -= x ;
            sum += a[med];
        }
        cout << sum << endl ;
    }
}