// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e3 + 3;
pair<string, pair<int, pair<int, pair<int, int>>>> p[N];

#define s second
#define f first

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].f >> p[i].s.f >> p[i].s.s.f >> p[i].s.s.s.f >> p[i].s.s.s.s;
    }

    sort(p, p + n, [](const pair<string, pair<int, pair<int, pair<int, int>>>> &a, const pair<string, pair<int, pair<int, pair<int, int>>>> &b)
         {
             if (a.s.f + a.s.s.f + a.s.s.s.f + a.s.s.s.s == b.s.f + b.s.s.f + b.s.s.s.f + b.s.s.s.s)
             {
                 return a.first < b.first;
             }
             else
                 return a.s.f + a.s.s.f + a.s.s.s.f + a.s.s.s.s > b.s.f + b.s.s.f + b.s.s.s.f + b.s.s.s.s; });

    for (int i = 0; i < n; i++)
    {
        ll res = p[i].s.f + p[i].s.s.f + p[i].s.s.s.f + p[i].s.s.s.s;
        cout << p[i].f << " " << res << " " << p[i].s.f << " " << p[i].s.s.f << " " << p[i].s.s.s.f << " " << p[i].s.s.s.s << endl;
    }
}