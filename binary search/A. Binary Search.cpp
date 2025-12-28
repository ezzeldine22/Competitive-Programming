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

    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "lower")
        {
            int f, s;
            cin >> f >> s;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (v[mid].first < f || v[mid].first == f && v[mid].second < s)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << ans << endl;
        }
        else if (op == "upper")
        {
            int f, s;
            cin >> f >> s;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (v[mid].first > f || v[mid].first == f && v[mid].second > s)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
        else if (op == "find")
        {
            int f, s;
            cin >> f >> s;
            int l = 0, r = n - 1;
            string ans = "not found";
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (v[mid].first == f && v[mid].second == s)
                {
                    ans = "found";
                    break;
                }
                else if (v[mid].first < f || v[mid].first == f && v[mid].second < s)
                {
                    l = mid + 1;
                }
                else if (v[mid].first > f || v[mid].first == f && v[mid].second > s)
                {
                    r = mid - 1;
                }
            }
            cout << ans << endl;
        }
    }
}