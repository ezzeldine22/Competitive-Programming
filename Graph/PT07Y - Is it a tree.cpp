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

const int N = 1e4 + 4, M = 2e4 + 4;

vector<int> adj_List[N];
bool vis[N];
int n, m, u, v;

void DFS(int node)
{

    if (vis[node])
        return;
    else
        vis[node] = true;

    for (int v : adj_List[node])
        DFS(v);
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }
    int conn{};
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            conn++;
            DFS(i);
        }
    }

    if (conn == 1 && n - m == 1)
        cout << "YES";
    else
        cout << "NO";
}