// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int N = 5000 + 1;
bool dp1[N][N];
int dp2[N][N];
bool vis1[N][N], vis2[N][N];
string s;
bool ispal(int l, int r)
{
    if (l >= r)
        return 1;
    bool &ret = dp1[l][r];
    if (vis1[l][r])
        return ret;
    vis1[l][r] = 1;
    return ret = (s[l] == s[r] && ispal(l + 1, r - 1));
}

int count_pal(int l, int r)
{
    if (l > r)
        return 0;
    int &ret = dp2[l][r];
    if (vis2[l][r])
        return ret;
    vis2[l][r] = 1;
    return ret = ispal(l, r) + count_pal(l + 1, r) + count_pal(l, r - 1) - count_pal(l + 1, r - 1);
}

int main()
{
    author_EzzEldine

            cin >>
        s;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << count_pal(l - 1, r - 1) << '\n';
    }
}