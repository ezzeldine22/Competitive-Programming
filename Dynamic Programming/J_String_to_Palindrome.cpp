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
we have a string and we want to convert it to palindrome with min of ops

ops:
1- add char
2- remove char
3- replace char with another one


F: input : string
  output : the min number of operation to make this string palindrome

  if the first char equal the last char -> solve(l+1 , r+1 )
  if not you have 3 options
  add and remove char  :1 + solve(l , r+1 )
              1 + solve(l+1, r  )
  replace 1 + solve(l+1,r+1)

  base case :
  l >= r
  return 0;




*/

const int N = 1003;
string s;
int tt, dp[N][N];

int solve(int l, int r)
{
    if (l >= r)
        return 0;
    if (~dp[l][r])
        return dp[l][r];
    if (s[l] == s[r])
        return dp[l][r] = solve(l + 1, r - 1);

    int ch1 = 1 + solve(l + 1, r);
    int ch2 = 1 + solve(l, r - 1);
    int ch3 = 1 + solve(l + 1, r - 1);

    return dp[l][r] = min({ch1, ch2, ch3});
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif
    cin >> tt;
    int i = 1;
    while (i <= tt)
    {
        memset(dp, -1, sizeof dp);
        cin >> s;
        int sz = s.size();
        cout << "Case " << i << ": " << solve(0, sz - 1) << endl;
        i++;
    }
}