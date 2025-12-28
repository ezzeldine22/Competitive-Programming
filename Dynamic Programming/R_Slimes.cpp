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

const int N = 405;
ll arr[N], pref[N];
ll dp[N][N];
int n;

ll solve3(int l, int r)
{
    if (l >= r)
        return 0;

    ll &ret = dp[l][r];
    if (~ret)
        return ret;

    ll ans = 1e15;
    for (int k = l; k < r; ++k)
    {
        ans = min(ans, solve3(l, k) + solve3(k + 1, r));
    }

    return ret = ans + pref[r] - (l ? pref[l - 1] : 0);
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
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        pref[i] = arr[i];
        if (i)
            pref[i] += pref[i - 1];
    }

    cout << solve3(0, n - 1) << endl;
}