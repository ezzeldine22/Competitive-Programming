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
    vector<ll> v(n);
    ll min_h = INT_MAX, max_h = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        min_h = min(min_h, v[i]);
        max_h = max(max_h, v[i]);
    }
    if (min_h == max_h)
        cout << 0 << endl;
    else
    {
        ll l{}, r{}, dis{}, min_dis = INT_MAX;

        while (l < n)
        {
            while (r < n && ((v[r] != max_h && v[l] == min_h) || (v[r] != min_h && v[l] == max_h)))
            {
                r++;
            }
            if ((v[r] == max_h && v[l] == min_h) || (v[l] == max_h && v[r] == min_h))
            {
                dis = abs(r - l);
                min_dis = min(min_dis, dis);
            }
            l++;
        }
        cout << min_dis << endl;
    }
}