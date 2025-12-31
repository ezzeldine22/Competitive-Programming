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
int n, m, u, v;
vector<int> adjList[N];

bool vis[N];
int res{};

void DFS(int node, bool &valid)
{

    vis[node] = true;

    if (adjList[node].size() != 2)
    {
        valid = false;
    }
    for (int n : adjList[node])
    {
        if (!vis[n])
            DFS(n, valid);
    }
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
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    if (m == 0)
        cout << 0;
    else
    {
        int res{};

        for (int i = 1; i <= n; i++)
        {
            bool valid = true;
            if (!vis[i])
            {
                DFS(i, valid);
                if (valid)
                    res++;
            }
        }
        cout << res;
    }
}