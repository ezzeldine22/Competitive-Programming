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

int get_fst_1(int n)
{

    int fst_1 = -1;
    for (int i = 0; i < 32; i++)
    {
        if (IsOn(n, i))
        {
            fst_1 = i;
            break;
        }
    }
    return fst_1;
}
int get_fst_0(int n)
{

    int fst_0 = -1;
    for (int i = 0; i < 32; i++)
    {
        if (!(IsOn(n, i)))
        {
            fst_0 = i;
            break;
        }
    }
    return fst_0;
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    ll n, q;
    cin >> n >> q;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int bit = get_fst_0(n);
            if (bit != -1)
                n = ON(n, bit);
            cout << n << endl;
        }
        else if (op == 2)
        {
            int bit = get_fst_1(n);
            if (bit != -1)
                n = OFF(n, bit);
            cout << n << endl;
        }
        else if (op == 3)
        {
            int bit = (n != 0 ? get_fst_1(n) : 32);

            for (int i = 0; i < bit; i++)
            {
                n = ON(n, i);
            }
            cout << n << endl;
        }
        else if (op == 4)
        {
            int bit = (n != -1 ? get_fst_0(n) : 32);
            for (int i = 0; i < bit; i++)
            {
                n = OFF(n, i);
            }
            cout << n << endl;
        }
        else
        {
            if (((n & (n - 1)) == 0) && n != 0)
                cout << "is power of two\n";
            else

            {
                cout << "not power of two\n";
            }
        }
    }

    return 0;
}