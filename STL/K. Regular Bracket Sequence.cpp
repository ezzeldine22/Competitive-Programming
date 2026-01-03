// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

stack<char> st;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string Sequence;
    cin >> Sequence;
    int answer{};
    for (int i = 0; i < Sequence.size(); i++)
    {
        if (Sequence[i] == '(')
            st.push(Sequence[i]);
        else if (Sequence[i] == ')' && !(st.empty()))
        {
            st.pop();
            answer += 2;
        }
    }
    cout << answer;
}