/* Basically we have to find common position of knight from king and queen.

So for king/queen there are 8 positions from which a knight can attack if a!=b

(if a=b then 4 pos)

we have to take these 8 positions for king and queen , and count how many are common.

Use 2 sets of pair data structure to store the 8 positions.

For 4 quadrants declare dx[4] and dy[4] globally and give them values of +-1 accordingly.

then insert the values in set accordingly for x and y by once giving x->a ,y->b then vice versa , do this for all 4 quadrants.

after that run a loop to check for all pos of kings if they exist in queen pos
 */

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