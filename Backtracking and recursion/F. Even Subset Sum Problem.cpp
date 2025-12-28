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

void solve(vector<int> v, int idx, int sum, vector<int> &idxes, vector<int> &ans)
{

    if (idx == v.size())
        return;

    for (int i = idx; i < v.size() && ans.size() == 0; i++)
    {
        sum += v[i];
        idxes.push_back(i);

        if (sum % 2 == 0)
        {
            ans = idxes;
        }
        solve(v, i + 1, sum, idxes, ans);
        sum -= v[i];
        idxes.pop_back();
    }
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, sum{};
        cin >> n;
        vector<int> v(n), idxes, ans;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        solve(v, 0, sum, idxes, ans);

        if (ans.size() > 0)
        {
            cout << ans.size() << endl;

            for (int x : ans)
            {
                cout << x + 1 << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}