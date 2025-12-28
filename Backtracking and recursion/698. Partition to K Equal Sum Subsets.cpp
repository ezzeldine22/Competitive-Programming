// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/input.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool palindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (!(s[i] == s[s.size() - i - 1]))
            return 0;
    }
    return 1;
}
int n;
string s;
vector<string> cur;

vector<vector<string>> ans;
void solve(int idx, vector<vector<string>> &v)
{
    if (idx == n)
    {
        v.push_back(cur);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        string left = s.substr(idx, i - idx + 1);
        if (palindrome(left))
        {
            cur.push_back(left);
            solve(idx + 1, v);
            cur.pop_back();
        }
    }
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> s;
    n = s.size();
    solve(0, ans);
    for (auto x : ans)
    {
        for (auto z : x)
            cout << z << " ";
        cout << endl;
    }
}