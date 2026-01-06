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

    int n, k;
    cin >> n >> k;
    vector<int> theo(n);
    vector<int> awake(n);

    ll fst_s{};
    for (int i = 0; i < n; i++)
    {
        cin >> theo[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> awake[i];
        if (awake[i])
            fst_s += theo[i];
    }

    ll l{}, r{}, sum{}, max_sum{};
    while (r < k)
    {
        if (awake[r] == 0)
            max_sum += theo[r];
        r++;
    }
    sum = max_sum;
    while (r < n)
    {
        if (awake[l] == 0)
            sum -= theo[l];
        l++;
        if (awake[r] == 0)
            sum += theo[r];
        r++;

        max_sum = max(sum, max_sum);
    }
    ll res = max_sum + fst_s;
    cout << res;
}
