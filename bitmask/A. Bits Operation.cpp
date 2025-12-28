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

    ll q, n;
    cin >> q >> n;
    while (q--)
    {
        ll choice, ele;
        cin >> choice;
        if (choice == 1)
        {
            cin >> ele;
            n |= ele;
        }
        else if (choice == 2)
        {
            cin >> ele;
            n &= ele;
        }
        else if (choice == 3)
        {
            cin >> ele;
            n ^= ele;
        }
        else
        {
            n = ~n;
        }
        cout << n << endl;
    }

    return 0;
}