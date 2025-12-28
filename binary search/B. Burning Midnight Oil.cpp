// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

/*


binary search on all posible nums from n -> k
 lines = v
 ans = n
 ans -= lines
 lines /= k


*/

bool can(int mid, int n, int k)
{

    int ans = n;
    int lines = mid;
    while (lines > 0)
    {
        ans -= lines;
        lines /= k;
    }
    return ans <= 0;
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    int l = k, r = n, ans = n;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (can(mid, n, k))
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