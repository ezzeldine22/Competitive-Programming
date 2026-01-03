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

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        vector<int> v;
        set<vector<int>> seq;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(v[i], v[j]);
                seq.insert(v);
                swap(v[i], v[j]);
            }
        }

        cout << seq.size() << endl;
    }
}