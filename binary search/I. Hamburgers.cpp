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
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    string rec;
    cin >> rec;
    ll money;
    ll nb, ns, nc, pb, ps, pc;

    cin >> nb >> ns >> nc >> pb >> ps >> pc >> money;

    ll req_b{}, req_s{}, req_c{};

    for (int i = 0; i < rec.size(); i++)
    {
        req_b += (rec[i] == 'B');
        req_c += (rec[i] == 'C');
        req_s += (rec[i] == 'S');
    }

    ll l = 0, r = money + max({nb, ns, nc}), ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll n_Bread = max(0LL, (mid * req_b) - nb);
        ll n_Sausage = max(0LL, (mid * req_s) - ns);
        ll n_Cheese = max(0LL, (mid * req_c) - nc);

        ll Cost = (n_Bread * pb) + (n_Cheese * pc) + (n_Sausage * ps);
        if (Cost <= money)
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