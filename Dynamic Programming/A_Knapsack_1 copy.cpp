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

int n, capacity;
const int N = 1e2 + 5;
const int Y = 1e5 + 5;
ll w[N], v[N], dp[N][Y];
bool vis[N][Y];
ll solve(int idx, int cap)
{
    if (cap > capacity)
        return -1e12;
    if (idx == n)
        return 0;
    if (vis[idx][cap])
        return dp[idx][cap];
    vis[idx][cap] = true;
    ll op1 = solve(idx + 1, cap + w[idx]) + v[idx];
    ll op2 = solve(idx + 1, cap);

    return dp[idx][cap] = max(op1, op2);
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> capacity;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    cout << solve(0, 0);
}