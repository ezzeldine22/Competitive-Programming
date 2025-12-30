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

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int tt;
    cin >> tt;
    while (tt--)
    {

        int n, k;
        cin >> n;

        if (n == k)
            for (int i = 0; i < n; i++)
            {
                cout << "1";
            }
        else if (k == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "0";
            }
        }
        else if (n == 1)
        {
            if (k > 0)
                cout << "1";
            else
                cout << "0";
        }
    }
}