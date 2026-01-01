// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long
string Heading, Text;
int H_freq[201]{};
int T_freq[201]{};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    getline(cin, Heading);
    getline(cin, Text);

    for (int i = 0; i < Heading.size(); i++)
    {
        H_freq[Heading[i]]++;
    }
    for (int i = 0; i < Text.size(); i++)
    {
        T_freq[Text[i]]++;
    }

    for (int i = 0; i < Text.size(); i++)
    {
        if (Text[i] != ' ')
        {
            if ((T_freq[Text[i]] > H_freq[Text[i]]))
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}