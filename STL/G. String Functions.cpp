// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, q;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q >> s;

    while (q--)
    {
        string op;
        cin >> op;
        if (op == "pop_back")
        {
            if (!s.empty())
                s.pop_back();
        }
        else if (op == "front")
        {
            if (!s.empty())
                cout << s.front() << endl;
        }
        else if (op == "back")
        {
            if (!s.empty())
                cout << s.back() << endl;
        }
        else if (op == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "print")
        {

            int pos;
            cin >> pos;
            if (pos <= s.size())
                cout << s[pos - 1] << endl;
        }
        else if (op == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            string sub = s.substr(l - 1, (r - l + 1));
            cout << sub << endl;
        }
        else if (op == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}