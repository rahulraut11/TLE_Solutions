/* We have to find no of min and max buses when given no of total tires .

Equation will be 4x + 6y = n -> 2x + 3y = n/2 .

Since x and y are integers this implies n must be even.

Therefore print -1 for n < 4 or when n is odd.

for min buses : we have to maximize the 6 wheeler 

n%6 can be 0, 2 or 4 , for 4 just add 1 4 wheeler bus , for 2 remove one 6 wheeler  and add two 4 wheelers so ans for both cases will be n/6 rounded up 

for max buses : n%4 can be 2 only , even then no of buses is unchanged even if we add 6 wheeler coz we have to remove one 4 wheeler so effectively no of buses is same

therefore its always y/4 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x, y;
        if (n % 2 == 1 || n < 4)
            cout << "-1" << endl;
        else
        {
            x = ceil(n * 1.0 / 6);
            y = n / 4;
            cout << x << " " << y << endl;
        }
    }
    return 0;
}