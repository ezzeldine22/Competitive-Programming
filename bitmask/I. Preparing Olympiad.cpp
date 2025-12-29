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

    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans{};

    if (n > 2)
    {
        for (int i = 3; i < (1 << n); i++)
        {
            if ((i & (i - 1)) == 0)
                continue;
            ll sum{};
            int min_d = INT_MAX, max_d{};

            for (int j = 0; j < n; j++)
            {
                if (IsOn(i, j))
                {
                    sum += v[j];
                    min_d = min(min_d, v[j]);
                    max_d = max(max_d, v[j]);
                }
            }
            if (sum >= l && sum <= r && max_d - min_d >= x)
                ans++;
        }

        cout << ans << endl;

        return 0;
    }
    else
    {
        ll sum{};
        int min_d = INT_MAX, max_d{};
        if (n == 2)
        {
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                min_d = min(min_d, v[i]);
                max_d = max(max_d, v[i]);
            }
            if (sum >= l && sum <= r && max_d - min_d >= x)
                ans++;
        }
        cout << ans << endl;
    }
}