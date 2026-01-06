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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll l{}, r{}, max_c{};

    while (l < n)
    {
        while (r < n && v[r] - v[l] <= 5)
        {
            r++;
        }
        max_c = max(r - l, max_c);
        l++;
    }
    cout << max_c;
}