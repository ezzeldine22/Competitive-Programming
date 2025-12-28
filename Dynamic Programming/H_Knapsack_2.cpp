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

int n, cap;
const int N = 1e2 + 2;
const int Y = 1e5 + 5;

int w[N], v[N], dp[N][Y];

ll solve(int idx, int profit)
{
    if (profit < 0)
        return 1e11;

    if (idx == n)
        return profit == 0 ? 0 : 1e11;

    if (~dp[idx][profit])
        return dp[idx][profit];

    ll op1 = solve(idx + 1, profit - v[idx]) + w[idx];
    ll op2 = solve(idx + 1, profit);

    return dp[idx][profit] = min(op1, op2);
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> cap;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    memset(dp, -1, sizeof dp);
    for (int i = 1e5; i >= 0; i--)
    {
        if (solve(0, i) <= cap)
            return cout << i, 0;
    }
}