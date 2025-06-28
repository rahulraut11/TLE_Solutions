/* Count how many times each character appears in t using a hash map.

Traverse s from end to start:

If the character is needed for t (i.e., its count in the hash map is > 0), keep it and decrease the count.

Else, mark it with . (indicating it's extra and not needed).

Build a new string ans by collecting all characters in s that are not .

If ans equals t, return "YES"; else return "NO". */
#include <bits/stdc++.h>
using namespace std;
string solve()
{
    string s, t;
    cin >> s >> t;
    int n = t.size();
    int last = 0;
    unordered_map<char, int> hash;
    for (char c : t)
    {
        hash[c]++;
    }
    for (int i = s.size(); i >= 0; i--)
    {
        if (hash[s[i]] > 0)
            hash[s[i]]--;
        else
            s[i] = '.';
    }
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '.')
            ans.push_back(s[i]);
    }
    if (ans == t)
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