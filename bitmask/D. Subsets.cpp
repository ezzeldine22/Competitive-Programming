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

    int n;
    cin >> n;
    vector<int> v(n);

    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {

            if (IsOn(i, j))
                a.push_back(v[j]);
        }
        ans.push_back(a);
    }
    sort(ans.begin(), ans.end());
    for (auto x : ans)
    {
        for (auto z : x)
        {
            cout << z << " ";
        }
        cout << endl;
    }

    return 0;
}