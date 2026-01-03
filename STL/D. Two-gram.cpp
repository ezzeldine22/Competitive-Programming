// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

multiset<string> pairs;
pair<int, string> MAX{INT_MIN, ""};

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    int n;

    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i + 1 != s.size())
        {
            auto z = s.substr(i, 2);
            pairs.insert(z);
        }
    }

    multiset<string>::iterator it;

    for (it = pairs.begin(); it != pairs.end(); it++)
    {
        int freq = pairs.count(*it);

        if (freq > MAX.first)
        {
            MAX.first = freq;
            MAX.second = *it;
        }
    }
    cout << MAX.second;
}