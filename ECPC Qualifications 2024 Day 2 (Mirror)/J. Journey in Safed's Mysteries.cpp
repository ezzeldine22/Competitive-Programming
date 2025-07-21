// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
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

    unordered_map<char, int> rel_date;
    char pos = '0';
    for (char c = 'A'; c <= 'J'; pos++, c++)
    {
        rel_date[c] = pos;
    }
    string s, t;
    cin >> s >> t;
    vector<char> s2(s.size());
    int l = 0, r = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
            s2[l++] = s[i];
        else
            s2[r--] = s[i];
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (rel_date.count(t[i]))
        {
            t[i] = rel_date[t[i]];
        }
    }

    for (char c : s2)
    {
        cout << c;
    }
    cout << "\n"
         << t;
}