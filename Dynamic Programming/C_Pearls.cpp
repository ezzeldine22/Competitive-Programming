// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <iostream>
#include <cstring>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)

const int N = 1e2 + 2;
ll tt, c, a[N], p[N], px[N], dp[N];
ll solve(int i)
{
    if (i == 0)
        return 0;
    if (~dp[i])
        return dp[i];
    ll op1 = 1e15;
    for (int j = 0; j < i; j++)
    {
        op1 = min(op1, solve(j) + ((px[i] - px[j]) + 10) * p[i]);
    }
    return dp[i] = op1;
}
main()
{

    cin >> tt;
    while (tt--)
    {
        memset(dp, -1, sizeof dp);
        cin >> c;
        px[0] = 0;
        for (int i = 1; i <= c; i++)
        {
            cin >> a[i] >> p[i];
            px[i] = px[i - 1] + a[i];
        }
        cout << solve(c) << endl;
    }
}