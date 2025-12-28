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

f() : return the max possible score of the player 1 if he took the first


if p1 takes the first p2 takes the optimal between second and the last and
if p1 takes the last  p2 take the optimal between first and before last

n -> 4

int op1 = max(a[idx+1] + f(idx+1), a[n] + f(n))
int op2 = max(f(idx),f(n-idx-1))


what if we make a para for the current trun of the player
so

if solve(p1)
solve(p2)
else
solve(p1)


the optimal playing for p1 in the example
4
4 5 1 3

is
p1 => 3
p2 => 4
p1 => 5
p2 => 1


so every round p1 will choose the max ( taking the first , taking the last)
and in the same time the taken element is not taken before


every round

p1 can choose a[idx] or a[n-idx]

p2 can choose a[idx] or a[n-idx+1]


------------------------------

solve(who , idx)



 op1 =a[idx]+ solve(p2,idx+1)
 op2 =a[n-idx]+solve(p2,idx)

 if p2

 op1 = a[idx]+solve(p1,idx+1)
 op2 = a[n-idx+1]+solve(p1,idx)



---


return max(op1 , op2);


p1 (first) --> sum - p2(max(second , last))
p1 (last)--> p2 (max(first , one before last))


st => 0
end => 3


0 1 2 3
4 5 1 3

solve(st , end , who)


base case
st == end
return a[st];


op1 = a[st]+solve(st+1,end ,!p)
op2 = a[end]+solve(st,end-1,!p)

dp[st][end][p]=max(op1,op2);

*/
const int N = 5e3 + 3;
ll dp[N][N][2], a[N], n;
bool vis[N][N][2];
ll solve(int st, int end, int p)
{
    if (st > end)
        return 0;

    ll &ret = dp[st][end][p];
    bool &va = vis[st][end][p];
    if (va)
        return ret;
    va = true;

    if (st == end)
        return ret = (p == 0 ? a[st] : 0);

    if (p == 0)
    {
        ll op1 = a[st] + solve(st + 1, end, !p);
        ll op2 = a[end] + solve(st, end - 1, !p);
        return ret = max(op1, op2);
    }
    else
    {
        ll op1 = solve(st + 1, end, !p);
        ll op2 = solve(st, end - 1, !p);
        return ret = min(op1, op2);
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
        cin >> a[i];
    }
    cout << solve(0, n - 1, 0);
}