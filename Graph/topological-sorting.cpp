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

const int N = 1e5 + 5, M = 2e5 + 5;

int n, m, u, v;

bool vis[N];
vector<int> adjList[N];
void DFS(int u)  // O(N + M)
{
    vis[u] = true;
    for (int v : adjList[u])
    {
        if (!vis[v])
        {
            DFS(v);
        }
    }
    cout << u << " ";
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
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            DFS(i);
    }
}

/*
 sample input :

6 8
0 1
0 2
0 5
5 2
5 4
3 2
3 4
1 3


*/