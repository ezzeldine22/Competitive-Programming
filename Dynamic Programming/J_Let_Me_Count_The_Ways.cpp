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

const int V = 30006, C = 5;
int ops[] = {1, 5, 10, 25, 50};
ll dp[C + 1][V];
int n;

ll solve(int idx, int v)
{
    if (v == 0)
        return 1;
    if (v < 0)
        return 0;
    if (~dp[idx][v])
        return dp[idx][v];
    dp[idx][v] = 0;
    for (int i = idx; i < 5; i++)
    {
        dp[idx][v] += solve(i, v - ops[i]);
    }
    return dp[idx][v];
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    solve(0, 30000);
    dp[0][0] = 1;
    while (cin >> n)
    {
        ll ans;
        ans = dp[0][n];

        if (ans == 1)
        {
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
        }
        else
        {
            cout << "There are " << ans << " ways to produce " << n << " cents change." << endl;
        }
    }
}