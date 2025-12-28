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

const int N = 1e5 + 5;
ll dp[N][2];
int n, a[N];

ll solve(int idx, int mod)
{
    if (idx == n)
        return mod == 0 ? 0 : 1e14;

    if (~dp[idx][mod])
        return dp[idx][mod];
    ll op1 = solve(idx + 1, mod) + abs(1 - a[idx]);
    ll op2 = solve(idx + 1, mod ^ 1) + abs(-1 - a[idx]);

    return dp[idx][mod] = min(op1, op2);
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return cout << solve(0, 0), 0;
}