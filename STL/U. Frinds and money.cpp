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

    map<string, ll> friends;
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        string s;
        ll pounds;
        cin >> s >> pounds;
        friends[s] = pounds;
    }
    while (q--)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int val;
            string name;
            cin >> name >> val;
            friends[name] += val;
        }
        else if (query == 2)
        {
            string name;
            cin >> name;
            cout << friends[name] << endl;
        }
    }
}