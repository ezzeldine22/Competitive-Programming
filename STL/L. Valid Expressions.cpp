// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// s[i]>=42 && s[i] <=47 operator
// s[i]>=48 && s[i] <=57 digits
int t;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        string s;
        stack<int> st;
        cin >> s;

        char x;

        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                if (s[i] >= 48 && s[i] <= 57 || s[i] == '-')
                    st.push(s[i]);
            }

            if (!st.empty())
            {

                if (st.top() >= 48 && st.top() <= 57)
                {
                    x = st.top();
                }

                if (st.top() >= 48 && st.top() <= 57)
                {
                    if (i + 1 == s.size())
                    {
                        if (!(s[i] >= 48 && s[i] <= 57))
                            st.push(s[i]);
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else if (st.top() >= 42 && st.top() <= 47)
                {
                    if (s[i] >= 48 && s[i] <= 57 && (st.top() != '/' || s[i] != 0) && abs(s[i] - x) > 1)
                    {
                        st.push(s[i]);
                    }
                }
            }
        }
        bool valid = (st.size() == s.size());

        if (valid)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
}

/*// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char x;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0 && (s[i] == '-' || (s[i] >= '0' && s[i] <= 9)))
            {
                st.push(s[i]);
            }
            if (i == 1 && st.top() == '-')
            {
                if (s[i] > '0' && s[i] <= 9)
                    st.push(s[i]);
            }
            else if (s[i] >= '0' && s[i] <= 9 && st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*')
                if (abs(s[i] - x) > 1 && (!(s[i] == 0 && st.top() == '/')))
                    st.push(s[i]);

                else if ((s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') && i + 1 != s.size())
                {
                    if (st.top() != '+' && st.top() != '-' && st.top() != '/' && st.top() != '*')
                    {
                        x = st.top();
                        st.push(s[i]);
                    }
                }
        }
        bool valid = true;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s.size() != st.size() || s[i] != st.top())
            {
                valid = false;
                break;
            }
            else
                st.pop();
        }
        if (valid)
        {
            cout << "Valid" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
}*/