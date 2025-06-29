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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        bool found = false;
        int x = -1, y = -1, z = -1;

        for (int j = 1; j < n - 1 && !found; j++)
        {
            bool left = false, right = false;
            for (int i = 0; i < j; i++)
            {
                if (p[i] < p[j])
                {
                    x = i;
                    left = true;
                    break;
                }
            }
            for (int k = j + 1; k < n; k++)
            {
                if (p[k] < p[j])
                {
                    z = k;
                    right = true;
                    break;
                }
            }
            if (left && right)
            {
                y = j;
                found = true;
            }
        }

        if (found)
            cout << "YES\n"
                 << x + 1 << " " << y + 1 << " " << z + 1 << "\n";
        else
            cout << "NO\n";
    }
    return 0;
}
