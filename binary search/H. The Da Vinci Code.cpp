// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int N = 1e5 + 5;
int prefix[N]{};

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        prefix[i] = prefix[i - 1] + vec[i];
    }
    sort(vec.begin(), vec.end());
    for (int i = 1; i <= x; i++)
    {
        int l = 1, r = n, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (prefix[mid] - prefix[mid - i] <= x)
            {
                ans = i;
                        }
        }
    }
}