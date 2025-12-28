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
int n;
int dp[N];
int h[N];
int solve(int idx)
{
    if (idx > n)
        return OO;
    if (idx == n)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];
    int op1 = solve(idx + 1) + abs(h[idx] - h[idx + 1]);
    int op2 = solve(idx + 2) + abs(h[idx] - h[idx + 2]);

    return dp[idx] = min(op1, op2);
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
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    cout << solve(1) << "\n";
}