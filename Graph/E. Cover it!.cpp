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

const int N = 2e5 + 5, M = 2e5 + 5;
vector<int> adjList[N];
bool vis[N];
void DFS(int u, vector<int> &ans)
{

    vis[u] = true;

    for (int v : adjList[u])
    {
        if (!vis[v])
        {
            DFS(v, ans);
        }
    }
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int q;
    cin >> q;
    while (q--)
    {
        int n, m, u, v;
        vector<int> ans;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        DFS(1, ans);
        cout << ans.size() << endl;
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }
}