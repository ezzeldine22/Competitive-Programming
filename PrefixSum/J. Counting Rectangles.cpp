// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e3 + 3;
ll arr[N][N];
ll pref[N][N];

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
        ll n, q;
        cin >> n >> q;

        for (int i = 0; i <= 1001; i++)
        {
            for (int j = 0; j <= 1001; j++)
            {
                arr[i][j] = pref[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {

            ll h, w;
            cin >> h >> w;
            arr[h][w] += (h * w);
        }

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {

                pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + arr[i][j];
            }
        }

        while (q--)
        {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;

            cout << pref[hb - 1][wb - 1] - pref[hs][wb - 1] - pref[hb - 1][ws] + pref[hs][ws] << endl;
        }
    }
}