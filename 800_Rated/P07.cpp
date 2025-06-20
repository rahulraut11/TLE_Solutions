#include <bits/stdc++.h>
using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
void solve()
{
    int n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;
    int cnt = 0;
    int r = 6;
    while (r--)
    {
        if (x.find(s) != string::npos)
            break;
        cnt++;
        x = x + x;
    }
    if (cnt < 6)
        cout << cnt << endl;
    else
        cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
