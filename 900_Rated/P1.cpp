#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, -1, 1, -1};
int dy[4] = {1, 1, -1, -1};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;

        set<pair<int, int>> king_pos, queen_pos;
        for (int j = 0; j < 4; j++)
        {
            king_pos.insert({xk + dx[j] * a, yk + dy[j] * b});
            king_pos.insert({xk + dx[j] * b, yk + dy[j] * a});

            queen_pos.insert({xq + dx[j] * a, yq + dy[j] * b});
            queen_pos.insert({xq + dx[j] * b, yq + dy[j] * a});
        }

        int ans = 0;
        for (auto position : king_pos)
        {
            if (queen_pos.find(position) != queen_pos.end())
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}