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

    int n;
    cin >> n;
    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].second == v[j].first)
            {
                v[i].second = v[j].second;
                v[j].first = v[i].first;
            }
        }
    }
    map<string, string> handles;

    for (int i = 0; i < n; i++)
    {
        handles[v[i].first] = v[i].second;
    }
    cout << handles.size() << endl;
    for (auto x : handles)
    {
        cout << x.first << " " << x.second << endl;
    }
}