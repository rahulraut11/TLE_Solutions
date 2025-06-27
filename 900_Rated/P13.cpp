/* To make whole array 0 , max no of operations is 2 coz if we take whole array in operation,

then 1st operation will make it some number say i , then since 0 is not present in array ,

after 2nd operation the whole array will be 0 ;

therefore calculate for 1 and 0 and if its >2 then we print 2 */

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
        int cnt = 0;
        if (a[0] != 0)
            cnt++;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != 0 && a[i - 1] == 0)
                cnt++;
        }
        if (cnt <= 2)
            cout << cnt << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}