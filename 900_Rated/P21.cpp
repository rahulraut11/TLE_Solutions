#include <bits/stdc++.h>
using namespace std;

int solve()
{
    long long n;
    cin >> n;
    vector<int> digits;
    while (n > 0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());
    int x = 0;
    int ans = INT_MAX;
    int size = digits.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (digits[i] == 5 || digits[i] == 0)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (digits[i] == 5)
                {
                    if (digits[j] == 2 || digits[j] == 7)
                    {
                        ans = min(ans, size - j - 2);
                        break;
                    }
                }
                else if (digits[i] == 0)
                {
                    if (digits[j] == 0 || digits[j] == 5)
                    {
                        ans = min(ans, size - j - 2);
                        break;
                    }
                }
            }
        }
    }
    return ans;
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