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

const int N = 1e5 + 5;
int n, m;
vector<int> adjList[N];
bool vis[N];
ll dp[N];
ll solve(int node)
{
    vis[node] = true;
    if (adjList[node].empty())
        return 0;
    if (~dp[node])
        return dp[node];

    for (int v : adjList[node])
    {
        dp[node] = max(dp[node], 1 + solve(v));
    }
    return dp[node];

} 

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    ll ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            ans = max(ans, solve(i));
    }
    cout << ans << endl;
}