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

int n, m;
int moves{};

void solve(int n)
{

    if (n == m)
    {
        cout << moves;
        exit(0);
    }

    if (n * 2 <= m)
    {
        moves++;
        solve(n * 2);
        moves--;
    }
    if (n * 3 <= m)
    {
        moves++;
        solve(n * 3);
        moves--;
    }
}

int main()
{

    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> m;
    if (m % n != 0)
        cout << -1;
    else
        solve(n);
}