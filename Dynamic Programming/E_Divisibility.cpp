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

const int N = 1e4 + 4;
int tt, n, k;
int a[10005];
int dp[10005][105];

int solve(int idx, int mod)
{

    if (idx == n - 1)
        return (mod == 0);

    if (~dp[idx][mod])
        return dp[idx][mod];

    int add = ((mod + a[idx + 1]) % k + k) % k;
    int sub = ((mod - a[idx + 1]) % k + k) % k;

    return dp[idx][mod] = (solve(idx + 1, add) || solve(idx + 1, sub));
    
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin);
    freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout);
#endif

    cin >> tt;
    while (tt--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        memset(dp, -1, sizeof dp);

        int st = (a[0] % k + k) % k;

        if (solve(0, st))
            cout << "Divisible\n";
        else
            cout << "Not divisible\n";
    }
}