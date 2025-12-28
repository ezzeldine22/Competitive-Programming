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

string a, b;
ll dp[5003][5003];
ll solve(int st1, int st2)
{

    if (st1 == a.size())
        return b.size() - st2;

    if (st2 == b.size())
        return a.size() - st1;

    if (a[st1] == b[st2])
        return dp[st1][st2] = solve(st1 + 1, st2 + 1);

    if (~dp[st1][st2])
        return dp[st1][st2];

    ll op1 = solve(st1 + 1, st2 + 1) + 1; // replace
    ll op2 = solve(st1 + 1, st2) + 1;     // delete
    ll op3 = solve(st1, st2 + 1) + 1;     // insert

    return dp[st1][st2] = min({op1, op2, op3});
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    cin >> a >> b;
    cout << solve(0, 0) << endl;
}