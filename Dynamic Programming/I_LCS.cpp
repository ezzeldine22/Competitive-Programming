// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

string s, t;
int dp[3003][3003];
int solve(int i, int j)
{
    if (i == s.size() || j == t.size())
        return 0;

    int &ret = dp[i][j];
    if (~ret)
        return ret;
    if (s[i] == t[j])
        return 1 + solve(i + 1, j + 1);
    return ret = max(solve(i + 1, j), solve(i, j + 1));
}

void path(int i, int j)
{
    if (i == s.size() || j == t.size())
        return;

    int &ret = dp[i][j];

    if (s[i] == t[j])
    {
        cout << s[i];
        path(i + 1, j + 1);
        return;
    }

    if (ret == solve(i + 1, j))
        path(i + 1, j);
    else
        path(i, j + 1);
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    cin >> s >> t;
    solve(0, 0);
    path(0, 0);
}