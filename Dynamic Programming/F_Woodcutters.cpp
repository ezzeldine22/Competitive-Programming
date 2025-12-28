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

const int N = 1e5 + 100;
int n, t[N], h[N];
int dp[N][2];
int solve(int idx, int lst)
{
    if (idx >= n - 1)
        return 0;
    if (~dp[idx][lst])
        return dp[idx][lst];
    int op1 = 0;
    if (t[idx] - h[idx] > t[idx - 1] + lst * h[idx - 1])
        op1 = max(op1, 1 + solve(idx + 1, 0));
    if (t[idx] + h[idx] < t[idx + 1])
        op1 = max(op1, 1 + solve(idx + 1, 1));
    return dp[idx][lst] = max(op1, solve(idx + 1, 0));
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> h[i];
    }
    if (n < 3)
        cout << n;
    else
    {
        memset(dp, -1, sizeof dp);
        cout << solve(1, 0) + 2;
    }
}