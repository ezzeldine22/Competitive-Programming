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
const ll M = 1e9 + 7;
int n, m;
char grid[1003][1003];
bool vis[1003][1003];
ll dp[1003][1003];
ll solve(int r, int c)
{
    if (r >= n || c >= m || grid[r][c] == '#')
        return 0;
    if (r == n - 1 && c == m - 1)
        return 1;
    if (vis[r][c])
        return dp[r][c];
    vis[r][c] = true;
    ll op1 = solve(r + 1, c);
    ll op2 = solve(r, c + 1);

    return dp[r][c] = (op1 + op2) % M;
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    ll ans = solve(0, 0);
    cout << ans << "\n";
}