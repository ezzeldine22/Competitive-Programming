// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/input.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int len = 1;
void solve(int n)
{
    if (n == 1)
        return;
    if (n % 2 != 0)
    {
        len++;
        solve((3 * n) + 1);
    }
    else
    {
        len++;
        solve(n / 2);
    }
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int n;
    cin >> n;
    solve(n);
    cout << len;
    return 0;
}