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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> p[i];
    }
    int fedor = p[m];

    int ans{};
    for (int i = 0; i < m; i++)
    {
        int diff{};
        for (int j = 0; j < 32; j++)
        {
            if (IsOn(fedor, j) != IsOn(p[i], j))
                diff++;
        }
        if (diff <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}