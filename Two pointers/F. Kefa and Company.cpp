// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, d;
    cin >> n >> d;

    vector<pair<ll, ll>> f(n);
    for (int i = 0; i < n; i++)
    {
        cin >> f[i].first >> f[i].second;
    }

    sort(f.begin(), f.end());

    ll max_sum{}, sum{}, l{}, r{};

    while (l < n)
    {
        while (r < n && f[r].first - f[l].first < d)
        {
            sum += f[r].second;
            r++;
        }

        max_sum = max(sum, max_sum);
        sum -= f[l].second;
        l++;
    }

    cout << max_sum << "\n";
}
