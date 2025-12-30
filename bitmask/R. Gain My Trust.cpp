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

    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        vector<string> v;
        for (int i = 0; i < (1 << s.size()); i++)
        {
            string x = "";
            for (int j = 0; j < s.size(); j++)
            {
                if (IsOn(i, j))
                    x += s[j];
            }
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }

    return 0;
}