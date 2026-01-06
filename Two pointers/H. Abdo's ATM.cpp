// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/input.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
}

int main()
{

    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int coins = s;
        int l = 0, r = 0, sum = 0, fst = -1, lst = -1, max_seg = 0;

        while (l < n)
        {
            if (coins + v[l] >= 0)
            {
                r = max(l, r);
                while (r < n && coins + v[r] >= 0)
                {

                    coins += v[r];
                    r++;
                }
                if (r - l > max_seg)
                {
                    fst = l + 1;
                    lst = r;
                    max_seg = r - l;
                }
                coins -= v[l++];
            }
            else
                l++;
        }
    }
}