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
const int N = 1e5 + 5, OO = 0x3f3f3f3f;
int n, k;
int dp[N];
int h[N];
bool vis[N];
int solve(int idx)
{
    if (idx > n)
        return OO;
    if (idx == n)
        return 0;

    if (vis[idx])
        return dp[idx];

    vis[idx] = true;
    dp[idx] = OO;
    for (int i = 1; i <= k; i++)
    {
        dp[idx] = min(dp[idx], solve(idx + i) + abs(h[idx] - h[idx + i]));
    }

    return dp[idx];
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    cout << solve(1) << "\n";
}