/* We have to find an interval such that [ L , L+1 , L+2 , ...... R-2 , R-1 , R ] all divide given number n.

Max time complexity we can use is Log(n) since n can be 10^18

We can say, if a number divides even a single element of interval then it is also divisor of n.

Assume there exist an interval of length m = L-R+1 ;

Start from 1 and see till how many number will you keep finding a divisor of n continuously.

i.e. we are making a interval like [ 1 , 2 , 3 .....] */

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
        int i = 1;
        while (n % i == 0)
        {
            i++;
        }
        cout << i - 1 << endl ;
    }
    return 0;
}