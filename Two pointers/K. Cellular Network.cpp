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

    int n, m;
    cin >> n >> m;

    vector<int> cities(n);
    vector<int> towers(m);

    for (int i = 0; i < n; i++)
    {
        cin >> cities[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> towers[i];
    }
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        int cityPos = cities[i];
        int minDist = numeric_limits<int>::max();

        auto it = lower_bound(towers.begin(), towers.end(), cityPos);

        if (it != towers.end())
        {
            minDist = min(minDist, abs(*it - cityPos));
        }

        if (it != towers.begin())
        {
            minDist = min(minDist, abs(*(--it) - cityPos));
        }

        result = max(result, minDist);
    }

    cout << result << endl;
    solve();
}