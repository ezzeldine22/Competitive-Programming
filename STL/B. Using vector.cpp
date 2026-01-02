// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
vector<int> v;
int n, q;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    while (q--)
    {
        string op;
        cin >> op;
        if (op == "pop_back")
        {
            v.pop_back();
        }
        else if (op == "front")
        {
            cout << v.front() << ln;
        }
        else if (op == "back")
        {
            cout << v.back() << ln;
        }
        else if (op == "sort")
        {
            int l, r;

            cin >> l >> r;

            sort(v.begin() + l - 1, v.begin() + r);
        }
        else if (op == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(v.begin() + l - 1, v.begin() + r);
        }
        else if (op == "print")
        {
            int pos;
            cin >> pos;

            cout << v[pos - 1] << ln;
        }
        else if (op == "push_back")
        {
            int ele;

            cin >> ele;
            v.push_back(ele);
        }
    }
}