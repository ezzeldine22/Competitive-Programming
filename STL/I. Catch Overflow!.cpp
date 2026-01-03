// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ull MIN = 1e10;
stack<ull> st;
int lines;
ull f = 0;
const ull OverFlow = (1ULL << 32) - 1;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    cin >> lines;
    while (lines--)
    {
        string op;
        cin >> op;
        if (op == "for")
        {
            ull x;
            cin >> x;

            if (!st.empty())
            {
                x = min((x * st.top()), MIN);
                st.push(x);
            }
            else
            {
                st.push(x);
            }
        }
        if (op == "end")
        {
            if (!st.empty())
                st.pop();
        }
        if (op == "add")
        {
            ull increment = st.empty() ? 1 : st.top();
            f = min(MIN, f + increment);
            if (f > OverFlow)
            {
                cout << "OVERFLOW!!!" << endl;
                return 0;
            }
        }
    }
    cout << f << endl;
}