// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
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

    string s;
    map<string, int> nums;

    cin >> s;

    for (int i = 0; i <= 9; i++)
    {
        string num;
        cin >> num;
        nums[num] = i;
    }

    for (int i = 0; i <= 70; i += 10)
    {
        string b = s.substr(i, 10);

        cout << nums[b];
    }
}