// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
int sumit(int n) { return n * (n + 1) / 2; }

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);

#endif

    int q = 5;
    while (q--)
    {
        int l = 0, r = 100, n = -1;
        int sum;
        cin >> sum;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int x = sumit(mid);

            if (x == sum)
            {
                n = mid;
                break;
            }
            else if (x < sum)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << n << endl;
    }
}