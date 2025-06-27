/* just count the no of consecutive same char , ans is that count + 1 */

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
        string s;
        cin >> s;
        int cnt = 1;
        int maxm = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
                maxm = max(maxm, cnt);
            }
            else
                cnt = 1;
        }
        cout << maxm + 1 << endl;
    }
}