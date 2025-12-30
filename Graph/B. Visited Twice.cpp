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

const int N = 1e3 + 3;
vector<int> adjList[N];
int vis[N];

const int Visited = 2, InProgress = 1, NotVisited = 0;
int Cycle(int u)
{
    vis[u] = InProgress;

    for (int v : adjList[u])
    {
        if (vis[v] == NotVisited)
            return Cycle(v);
        else
            return v;
    }
    vis[u] = Visited;
    return -1;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u;
        cin >> u;
        adjList[i].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        memset(vis, 0, sizeof(vis));
        cout << Cycle(i) << " ";
    }
}