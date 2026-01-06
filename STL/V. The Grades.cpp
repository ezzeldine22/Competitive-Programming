// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool comp(pair<string, pair<int, pair<int, pair<int, int>>>> &a, pair<string, pair<int, pair<int, pair<int, int>>>> &b)
{
    int a_tot = a.S.F + a.S.S.F + a.S.S.S.F + a.S.S.S.S;
    int b_tot = b.S.F + b.S.S.F + b.S.S.S.F + b.S.S.S.S;

    if (abs(a_tot - b_tot) > 10)
    {
        return a_tot > b_tot;
    }
    else
    {
        return a.F < b.F;
    }
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<pair<string, pair<int, pair<int, pair<int, int>>>>> v(n);
    for (int i = 0; i < n; i++)
    {
        // string name;
        // int sub1, sub2, sub3, sub4;

        cin >> v[i].F >> v[i].S.F >> v[i].S.S.F >> v[i].S.S.S.F >> v[i].S.S.S.S;
    }
    sort(v.begin(), v.end(), comp);

    for (auto x : v)
    {
        int x_tot = x.S.F + x.S.S.F + x.S.S.S.F + x.S.S.S.S;
        cout << x.F << " " << x_tot << " " << " " << x.S.F << " " << x.S.S.F << " " << x.S.S.S.F << " " << x.S.S.S.S << endl;
    }
}