
// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define MAX 1e5 + 5;

vector<char> v;

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int R_idx{}, B_idx{}, G_idx{};

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        v.push_back(x);
    }
    int ops{};

    for (int i = 0; i < n; i++)
    {

        if (v[i] == 'R')
        {
            if (R_idx != i)
            {
                ops++;
                if (i == B_idx)
                {
                    v[i] = 'B';
                }
                else
                {
                    v[i] = 'G';
                }
            }
            else
            {
                R_idx += 3;
                B_idx = (B_idx < 3 ? B_idx++ : B_idx);
                G_idx = (G_idx < 3 ? G_idx++ : G_idx);
            }
        }
        else if (v[i] == 'B')
        {
            if (B_idx != i)
            {
                ops++;
                if (i == R_idx)
                {
                    v[i] = 'R';
                }
                else
                {
                    v[i] = 'G';
                }
            }
            else
            {
                R_idx = (R_idx < 3 ? R_idx++ : R_idx);
                B_idx += 3;
                G_idx = (G_idx < 3 ? G_idx++ : G_idx);
            }
        }
        else if (v[i] == 'G')
        {
            if (G_idx != i)
            {
                ops++;
                if (i == B_idx)
                {
                    v[i] = 'B';
                }
                else
                {
                    v[i] = 'R';
                }
            }
            else
            {
                G_idx += 3;
                B_idx = (B_idx < 3 ? B_idx++ : B_idx);
                R_idx = (R_idx < 3 ? R_idx++ : R_idx);
            }
        }
    }
    cout << ops << endl;
    for (char ele : v)
    {
        cout << ele;
    }
}

/*// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
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

    vector<vector<char>> p = {{'R', 'G', 'B'},
                              {'R', 'B', 'G'},
                              {'B', 'R', 'G'},
                              {'B', 'G', 'R'},
                              {'G', 'R', 'B'},
                              {'G', 'B', 'R'}};

    int n;
    cin >> n;

    string s;
    cin >> s;

    pair<int, string> res = {INT_MAX, ""};

    for (const auto &pattern : p)
    {
        int cost = 0;
        string t = "";

        for (int i = 0; i < n; i++)
        {
            t += pattern[i % 3];
            if (s[i] != pattern[i % 3])
            {
                cost++;
            }
        }

        if (cost < res.first)
        {
            res = {cost, t};
        }
    }

    cout << res.first << "\n"
         << res.second;
}
*/