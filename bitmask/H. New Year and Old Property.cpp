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

    ll a, b;
    cin >> a >> b;
    vector<ll> v;
    v.push_back(2);
    for (int i = 2; i < 64; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ll x = ((1LL << (i + 1)) - 1) - (1LL << j);
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());

    int st = -1, end = -1;
    if (lower_bound(v.begin(), v.end(), a) != v.end())
        st = (lower_bound(v.begin(), v.end(), a) - v.begin());
    else
        st = (upper_bound(v.begin(), v.end(), a) - v.begin());

    end = (upper_bound(v.begin(), v.end(), b) - v.begin());

    cout << (end - st);

    return 0;
}