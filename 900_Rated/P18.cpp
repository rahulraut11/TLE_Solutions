#include <bits/stdc++.h>
using namespace std;
string solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long get = 2 * b - c;
    if (get % a == 0 && get / a > 0)
        return "yEs";
    get = (a + c) / 2;
    if (get % b == 0 && get / b > 0 && (c + a) % 2 == 0)
        return "yes";
    get = 2 * b - a;
    if (get % c == 0 && get / c > 0)
        return "YES";
    return "NO";
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