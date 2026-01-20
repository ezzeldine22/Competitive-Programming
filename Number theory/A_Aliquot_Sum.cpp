// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define Free_palestine           \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

ll getDivSum(int a)
{
    ll res{};
    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            res += i;
            if (i * i != a)
                res += a / i;
        }
    }
    res = max(0LL, res - a);
    return res;
}

int main()
{
    Free_palestine;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        ll res = getDivSum(a);
        if (res > a)
            cout << "abundant\n";
        else if (res < a)
            cout << "deficient\n";
        else
        {
            cout << "perfect\n";
        }
    }
}