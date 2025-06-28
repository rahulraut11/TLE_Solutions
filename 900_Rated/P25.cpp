#include <bits/stdc++.h>
using namespace std;
long long dist(int x, int y, int i, int j)
{
    return abs(j - y) + abs(i - x);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        cout << "1 1 " << n << " " << m << endl;
    }
}