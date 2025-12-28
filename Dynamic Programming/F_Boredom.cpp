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
int n, a[N], mx{}, cnt[N];
ll dp[N];
ll solve(int i)
{
    if (i > mx)
        return 0;
    if (~dp[i])
        return dp[i];
    ll op1 = -1e12, op2 = -1e12;
    if (cnt[i])
        op1 = solve(i + 2) + 1LL * cnt[i] * i;
    op2 = solve(i + 1);
    return dp[i] = max(op1, op2);
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        mx = max(a[i], mx);
    }
    cout << solve(1);
}