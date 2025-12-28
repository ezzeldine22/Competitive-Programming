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

/*

he shoots a particle with decay K at the 2d planes
if the K ==> 1 there no opposite side copy with k-1
else make opposite side copy with k-1


base cases

k == 1
return 1

plane number < 0
return 1;
plane number equals To the n
return 1;


so solve(plane number , K age that will provide) =>  solve(plane - 1, K - 1) + solve(plane + 1 , K)

but we need to consider the direction of the particle so

solve(2 , 3 , right) ==> solve(3,3,right)+ solve(1,2,left)

solve(1,2,left)==> 2 + solve(2,2,right) + solve(0,1,left)

if i ===> to zero return 1
so it will be

solve(1,2,left)=> solve(2,2,left)

dir (1 ==> right / 0 ===> left)

*/

const int MOD = 1e9 + 7;

ll dp[1003][1003][2];
int planes, age, tt;
ll solve(int p, int k, int dir)
{
    if (p < 0 || p == planes || k == 1)
        return 1;
    ll &ret = dp[p][k][dir];
    if (~ret)
        return ret;

    if (dir == 1)
        return ret = solve(p + 1, k, dir) % MOD + solve(p - 1, k - 1, !dir) % MOD;
    else
        return ret = solve(p - 1, k, dir) % MOD + solve(p + 1, k - 1, !dir) % MOD;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> tt;
    while (tt--)
    {
        memset(dp, -1, sizeof dp);
        cin >> planes >> age;
        cout << solve(0, age, 1) << endl;
    }
}