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
        while (1)
        {
            int first = s.front() - '0';
            int last = s.back() - '0';
            int res = first ^ last;
            if (res == 1)
            {
                if (s.size() >= 2)
                {
                    s = s.substr(1, s.size() - 2);
                }
                else
                {
                    s = ""; 
                    break ;
                }
            }
            else break ;
        }
        cout << s.size() << endl ;
    }
    return 0;
}