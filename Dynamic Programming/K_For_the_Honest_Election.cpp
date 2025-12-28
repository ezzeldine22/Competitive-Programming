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
for the honest election  codeforces :-

you to options the first one is taking more than half of the voters of the more than half of the groups number
the seconde options is dividing the into smaller groups of the same size

so you decide what is the minmum voters will be needed if we take more than half of more than half of the groups OR devide the groups to groups
in the same size

the question is how to define the state now


solve(group_size)=> min(all group_sizes possible)
for example

solve(12)--> min(solve(2) , solve(3) , solve(4) , solve(6))



 solve(1)->1
 solve(2)->2
 solve(3)->2
 solve(4)--> min(solve(2) , 3)
 solve(5)--> 3


 the solve of any groups requires knowledge of how many groups that are that division so

 solve(12,1)==> min [ solve(6,2) , solve(4,3) , solve(3,4) , solve(2,6) ]

 solve(sz , ng) ==> min(szAfterDivision , divisior)->for all divisors

 baseCase

 solve(2 , 3 , ng)

 ((ng/2)+1 * 2)



 solve(27,1)
 min((27,1)   ,  solve(9,3) ,solve(3,9)))

 (27,1)--> 14

 solve(9,3)---> solve(3,9) , (9,3)
 (9,3)-> 2*5 -->10

 solve(3,9)---> 5*2 -->10

 solve(9,3)---> 2 * solve(3,3)


 1 2 3 4 5 6 7 8 9

 10 11 12 13 14 15 16 17 18

 19 20 21 22 23 24 25 26 27


 (27,1)

 3 9

*/

int n;

unordered_map<int, int> dp;

int solve(int sz)
{

    if (dp.count(sz))
        return dp[sz];

    int op1 = (sz / 2) + 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (sz % i == 0)
            op1 = min(op1, ((i / 2) + 1) * solve(sz / i));
    }
    return dp[sz] = op1;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n;
    cout << solve(n);
}