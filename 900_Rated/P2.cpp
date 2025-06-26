/* Make a hash table for string , then find no of chars with odd no of counts.

Now if we want make a palindrome -> no of chars with odd count can be maximum of 1.

So we can say for s to be palindrome , no of chars with odd count <= 1  */

#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }
        int odd = 0;
        for (auto [ch, count] : freq)
        {
            if (count % 2 == 1)
                odd++;
        }
        if (odd - k > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}