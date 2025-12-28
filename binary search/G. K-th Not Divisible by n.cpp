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
        cin >> n >> k;

        ll l = 1, r = 1e10;
        while (l < r)
        {
            ll mid = l + r >> 1;
            if (mid - mid / n >= k)
                r = mid;
            else
            {
                l = mid + 1;
            }
        }
        cout << r << "\n";
    }
}

// int set_len = n - 1;
// int noSets = k / set_len;
// int steps = k % set_len;
// int total = noSets * n - 1;
// if (steps > 0)
//     total += steps + 1;
// cout << total << endl;