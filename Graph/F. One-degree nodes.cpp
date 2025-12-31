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

unordered_map<int, vector<int>> adjList;
int n, u, v;

unordered_map<int, bool> vis;

vector<int> ans;
void DFS(int u)
{
    vis[u] = true;
    ans.push_back(u);
    for (int v : adjList[u])
    {
        if (!vis[v])
            DFS(v);
    }
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n;
    unordered_set<int> nodes;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
        nodes.insert(u);
        nodes.insert(v);
    }

    for (int i : nodes)
    {
        if (adjList[i].size() == 1)
        {
            DFS(i);
            break;
        }
    }
    for (int x : ans)
    {
        cout << x << " ";
    }
}