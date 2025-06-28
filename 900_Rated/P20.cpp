#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cntab = 0;
    int cntba = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            cntab++;
        if (s[i] == 'b' && s[i + 1] == 'a')
            cntba++;
    }
    if (cntab != cntba)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            string k = s;
            int cntab = 0;
            int cntba = 0;
            if (k[i] == 'a')
            {
                k[i] = 'b';
                for (int j = 0; j < n - 1; j++)
                {
                    if (k[j] == 'a' && k[j + 1] == 'b')
                        cntab++;
                    if (k[j] == 'b' && k[j + 1] == 'a')
                        cntba++;
                }
                if (cntab == cntba)
                    return k;
            }
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}