/* We want to make all elements to be 0 

It is not necessary to give minimum no of operations. 

So for even length array , take XOR from 1 to n : this will make all values from 1 to n to be some number lets say x. 

Take XOR again , and we know even times XOR of same number is 0 , hence answer is 2

For odd length array , same concept but take XOR from 1 to n-1 (to get no of elements selected be even) take XOR 2 times so that we make all elements from 1 to n-1 be 0 

After that take XOR 2 times from n-1 to n to make the last element we left to make it ZERO */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 0)
        {
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
        else
        {
            cout << "4" << endl;
            cout << "1 " << n - 1 << endl;
            cout << "1 " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
    return 0;
}