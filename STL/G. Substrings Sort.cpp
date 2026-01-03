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

    vector<string> p;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        p.push_back(s);
    }

    sort(p.begin(), p.end(), [](const string &a, const string &b)
         { return a.size() > b.size(); });

    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        bool valid = false;
        for (int j = 0; j < p[i].size(); j++)
        {
            string x = p[i].substr(j, p[i + 1].size());

            if (x == p[i + 1])
            {

                valid = true;
                break;
            }
            if (j + 1 + p[i + 1].size() > p[i].size())
            {
                break;
            }
        }
        if (!valid)
        {

            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        reverse(p.begin(), p.end());
        for (string x : p)
        {
            cout << x << endl;
        }
    }
    else
    {
        cout << "NO";
    }
}