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

    ll n, q;

    cin >> q >> n;
    while (q--)
    {
        int choice, ele;
        cin >> choice >> ele;

        if (choice == 1)
        {
            cout << (IsOn(n, ele)) << endl;
        }
        else if (choice == 2)
        {
            n = ON(n, ele);
            cout << n << endl;
        }
        else if (choice == 3)
        {
            n = OFF(n, ele);
            cout << n << endl;
        }
        else
        {
            if (IsOn(n, ele))
                n = OFF(n, ele);
            else
                n = ON(n, ele);
            cout << n << endl;
        }
    }

    return 0;
}