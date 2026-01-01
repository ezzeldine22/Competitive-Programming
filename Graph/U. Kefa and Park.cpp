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

const int N = 1e5 + 5, M = 1e5 + 5;
unordered_map<int, bool> cats;
int n, m, u, v;

vector<int> adjList[N];
bool vis[N];
int ans{};

void DFS(int u, int con, int parent)
{

    vis[u] = true;
    bool leaf = true;
    for (int v : adjList[u])
    {
        if (!vis[v])
        {
            if (v != parent)
                leaf = false;

            if (cats[v])
            {
                if (con + 1 <= m)
                    DFS(v, con + 1, u);
            }
            else
            {
                DFS(v, 0, u);
            }
        }
    }
    if (leaf)
        ans++;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        if (c)
            cats[i] = true;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    DFS(1, cats[1], -1);
    cout << ans << endl;
}