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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l{}, r{}, sum{}, min_len = INT_MAX, len;
    bool imp = false;
    while (l < n)
    {
        while (r < n && sum < m)
        {
            sum += v[r++];
            len = r - l;
        }

        if (sum >= m)
        {
            imp = true;
        }

        sum -= v[l++];
        if (sum >= m)
            len--;

        min_len = min(min_len, len);
    }
    cout << (imp ? min_len : -1);
}