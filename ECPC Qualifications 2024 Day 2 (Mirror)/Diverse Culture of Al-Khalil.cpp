// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif
    // still in progress
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, n2;
        cin >> n >> n2;
        char arr[n][n2];
        pair<int, int> frst_tel_idx{-1, -1};
        pair<int, pair<int, int>> lst_tel_idx{-1, {-1, INT_MAX}};
        bool va = false;
        pair<int, int> target = {n - 1, n2 - 1};
        pair<int, int> start = {0, 0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cin >> arr[i][j];

                if (frst_tel_idx.first == -1 && arr[i][j] == 'o')
                {
                    va = true;
                    frst_tel_idx.first = i;
                    frst_tel_idx.second = j;

                    lst_tel_idx.first = i;
                    lst_tel_idx.second.first = j;

                    int abs_diff = abs(i - target.first) + abs(j - target.second);
                    lst_tel_idx.second.second = abs_diff;
                }

                if (lst_tel_idx.first > -1 && arr[i][j] == 'o')
                {
                    va = true;
                    int abs_diff = abs(i - target.first) + abs(j - target.second);
                    if (abs_diff < lst_tel_idx.second.second)
                    {
                        lst_tel_idx.first = i;
                        lst_tel_idx.second.first = j;
                        lst_tel_idx.second.second = abs_diff;
                    }
                }
            }
        }
        int ans{};
        if (!va)
            cout << ((2 * n) - 2) * 2 << endl;
        else
        {
            // cout << frst_tel_idx.first << "," << frst_tel_idx.second << "\t" << lst_tel_idx.first << "," << lst_tel_idx.second.first << "\t";
            int abs_diff = abs(start.first - frst_tel_idx.first) + abs(start.second - frst_tel_idx.second);
            ans = ((abs_diff * 2) + 1) + (lst_tel_idx.second.second * 2);

            cout << ans << endl;
        }
    }
}