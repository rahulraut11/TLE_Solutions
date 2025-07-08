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
        vector<int> freq(2, 0);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                freq[0]++;
            else
                freq[1]++;
        }
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && freq[1] != 0)
            {
                freq[1]--;
                cnt++;
            }
            else if (s[i] == '1' && freq[0] != 0)
            {
                freq[0]--;
                cnt++;
            }
            else
                break;
        }
        cout << s.size() - cnt << endl;
    }
    return 0;
}