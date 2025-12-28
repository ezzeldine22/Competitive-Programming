// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool valid(ll mid, vector<int> v, int ops)
{
    ll sum{};
    for (int i = v.size() / 2; i < v.size(); i++)
    {
        if (v[i] < mid)
        {
            sum += mid - v[i];
        }
    }
    return sum <= ops;
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
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    ll l = nums[n / 2], r = nums[n / 2] + k, ans = nums[n / 2];
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        if (valid(mid, nums, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
}