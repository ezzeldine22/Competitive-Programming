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

const int N = 54;
int len, c, a[N];
int dp[N][N];
int solve(int l, int r)
{
    if (l + 1 == r)
        return 0;
    int op1 = 1e8;
    if (~dp[l][r])
        return dp[l][r];
    for (int i = l + 1; i < r; i++)
    {
        op1 = min(op1, solve(l, i) + solve(i, r) + (a[r] - a[l]));
    }
    return dp[l][r] = op1;
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    while (cin >> len, len ^ 0)
    {
        memset(dp, -1, sizeof dp);
        cin >> c;
        for (int i = 1; i <= c; i++)
        {
            cin >> a[i];
        }
        a[c + 1] = len;

        cout << "The minimum cutting is " << solve(0, c + 1) << "." << endl;
    }
}