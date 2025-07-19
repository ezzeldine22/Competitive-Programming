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

const int N = 1e5 + 5, M = 2e5 + 5, oo = 0x3f3f3f3f;

int n, m, u, v;

vector<int> adjList[N];

int dis[N];

void BFS(int src) // O(n + m)
{
    memset(dis, oo, sizeof dis);
    dis[src] = 0;

    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adjList[u])
        {
            if (dis[v] == oo)
            {
                q.push(v);
                dis[v] = dis[u] + 1;
            }
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
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    BFS(0);
    for (int i = 0; i < n; i++)
    {
        cout << "dis of " << i << " = " << dis[i] << endl;
    }
}