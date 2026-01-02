// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;
ll n, m, k, x, y, vl;
ll arr[N], l[N], r[N], v[N], P[N], f[N];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= m; i++)
    {

        cin >> l[i] >> r[i] >> v[i];
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        f[x]++;
        f[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        f[i] += f[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        vl = v[i] * f[i];
        P[l[i]] += vl;
        P[r[i] + 1] -= vl;
    }
    for (int i = 1; i <= n; i++)
    {
        P[i] += P[i - 1];
        cout << arr[i] + P[i] << " ";
    }
}