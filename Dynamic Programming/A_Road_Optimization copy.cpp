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
const int Y = 505;
int n, l, k;
int p[Y], s[Y];
int dp[Y][Y];
ll solve(int st, int del)
{

    if (del > k)
        return 1e15;
    if (st == n)
        return 0;

    if (~dp[st][del])
        return dp[st][del];

    ll op1 = 1e15;
    for (int i = st + 1; i <= n; i++)
    {
        op1 = min(op1, solve(i, del + i - st - 1) + (s[st] * (p[i] - p[st])));
    }
    return dp[st][del] = op1;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    cin >> n >> l >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    p[n] = l;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << solve(0, 0);
}
