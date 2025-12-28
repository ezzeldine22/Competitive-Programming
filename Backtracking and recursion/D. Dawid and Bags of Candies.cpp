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

    int A[4];
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    for (int i = 0; i < (1 << 4); i++)
    {
        int bag1{}, bag2{};
        for (int j = 0; j < 4; j++)
        {
            if (IsOn(i, j))
                bag1 += A[j];
            else
                bag2 += A[j];
        }
        if (bag1 == bag2)
        {
            cout << "YES\n";

            return 0;
        }
    }
    cout << "NO\n";
}
