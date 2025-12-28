// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve1()
{
    int shops;
    cin >> shops;
    vector<int> bottles(shops);
    for (int i = 0; i < shops; i++)
    {
        cin >> bottles[i];
    }
    sort(bottles.begin(), bottles.end());
    int d;
    cin >> d;
    vector<int> days(d);
    for (int i = 0; i < d; i++)
    {
        cin >> days[i];
        int no_shops = upper_bound(bottles.begin(), bottles.end(), days[i]) - bottles.begin();
        cout << no_shops << endl;
    }
}

void solve2()
{
    int shops;
    cin >> shops;
    vector<int> bottles(shops);
    for (int i = 0; i < shops; i++)
    {
        cin >> bottles[i];
    }
    sort(bottles.begin(), bottles.end());
    int d;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        int x;
        cin >> x;
        int l = 0, r = shops - 1, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (bottles[mid] <= x)
            {
                // ans += (mid + 1) - ans;
                ans = mid + 1;

                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    solve1();
}