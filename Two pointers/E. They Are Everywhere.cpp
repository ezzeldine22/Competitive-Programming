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

    int n, n_pok{};
    cin >> n;
    vector<char> flats(n);
    map<char, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> flats[i];
        m[flats[i]]++;
        if (m[flats[i]] == 1)
            n_pok++;
    }

    int l{}, r{}, collected{}, minf = n;

    map<char, int> m2;
    while (l < n)
    {
        while (r < n && collected < n_pok)
        {
            m2[flats[r]]++;
            if (m2[flats[r]] == 1)
                collected++;
            r++;
            if (collected == n_pok)
            {
                minf = min(minf, r - l);
            }
        }

        m2[flats[l]]--;
        if (m2[flats[l]] < 1)
        {
            collected--;
        }
        l++;
        if (collected == n_pok)
            minf = min(minf, r - l);
    }
    cout << minf;
}