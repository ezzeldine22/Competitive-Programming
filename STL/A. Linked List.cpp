// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
vector<string> qu;
vector<string>::iterator it;
int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, q;
    int query;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        qu.push_back(x);
    }

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            string ele;
            cin >> ele;
            bool deleted = false;
            for (it = qu.begin(); it != qu.end(); it++)
            {
                if (*it == ele)
                {
                    qu.erase(it);
                    deleted = true;
                    break;
                }
            }
            if (!deleted)
            {
                cout << "Not found" << endl;
            }
        }
        else if (type == 2)
        {
            if (qu.empty())
            {
                cout << "0" << endl;
            }
            else
            {
                for (it = qu.begin(); it != qu.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << endl;
            }
        }
        else if (type == 3)
        {
            if (qu.empty())
            {
                cout << "0" << endl;
            }
            else
            {
                vector<string> v(qu.begin(), qu.end());
                reverse(v.begin(), v.end());
                for (it = v.begin(); it != v.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << endl;
            }
        }
    }
}