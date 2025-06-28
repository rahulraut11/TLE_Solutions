#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }
        int minm = min(cnt0, cnt1);
        if (minm % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
    return 0;
}