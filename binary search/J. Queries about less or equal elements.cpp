// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve1()
{
    int s1, s2;
    cin >> s1 >> s2;

    vector<int> a1(s1);
    vector<int> a2(s2);

    for (int i = 0; i < s1; i++)
    {
        cin >> a1[i];
    }

    sort(a1.begin(), a1.end());
    for (int i = 0; i < s2; i++)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < s2; i++)
    {
        int res = upper_bound(a1.begin(), a1.end(), a2[i]) - a1.begin();
        cout << res << " ";
    }
}

void solve2()
{
    int s1, s2;
    cin >> s1 >> s2;

    vector<int> a1(s1);
    vector<int> a2(s2);

    for (int i = 0; i < s1; i++)
    {
        cin >> a1[i];
    }

    sort(a1.begin(), a1.end());
    for (int i = 0; i < s2; i++)
    {
        cin >> a2[i];
    }
    for (int i = 0; i < s2; i++)
    {
        int l = 0, r = s1 - 1, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a1[mid] <= a2[i])
            {
                ans += mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << (ans > 0 ? ans + 1 : ans) << " ";
    }
}

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    solve2();
}