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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> res;
        res.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            if (b[i] < b[i - 1])
            {
                res.push_back(1);
            }
            res.push_back(b[i]);
        }

        cout << res.size() << endl;
        for (int x : res)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
