// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

/*

 num_blocks ---> row nums
 1 -> 1   2 -> 2   3 -> 2   4->3  5-> 3  6-> 3
 7 -> 4  8-> 4  9-> 4   10 -> 4

*/

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll l = 1, r = sqrt(2 * n) + 1, ans = 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll sum = (mid * (mid + 1) / 2);

            if (sum >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}