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
int n;
int a[N], b[N], c[N];
ll dp[N][4];
bool vis[N][4];
ll solve(int i, int option)
{
    if (i == n)
        return 0;

    ll op1 = -1e12, op2 = -1e12, op3 = -1e12;

    if (vis[i][option])
        return dp[i][option];
    vis[i][option] = true;

    if (option == 1)
    {
        op1 = solve(i + 1, 2) + a[i];
        op2 = solve(i + 1, 3) + a[i];

        return dp[i][option] = max(op1, op2);
    }
    else if (option == 2)
    {
        op1 = solve(i + 1, 1) + b[i];
        op2 = solve(i + 1, 3) + b[i];
        return dp[i][option] = max(op1, op2);
    }
    else if (option == 3)
    {
        op1 = solve(i + 1, 1) + c[i];
        op2 = solve(i + 1, 2) + c[i];
        return dp[i][option] = max(op1, op2);
    }
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
        cin >> a[i] >> b[i] >> c[i];
    }

    ll ans = max({solve(0, 1), solve(0, 2), solve(0, 3)});
    cout << ans << endl;
}