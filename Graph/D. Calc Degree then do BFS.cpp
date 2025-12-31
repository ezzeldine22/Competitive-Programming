// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int N = 1e3 + 3;
vector<int> adjList[N];
bool vis[N];

bool BFS(int src)
{
    queue<int> q;
    vis[src] = true;
    q.push(src);

    while (q.size())
    {
        int added{};
        int u = q.front();
        q.pop();

        bool n_leaf = false;
        for (int v : adjList[u])
        {
            if (!vis[v])
            {
                q.push(v);
                vis[v] = true;
                added += (adjList[v].size() == 0);
            }
            n_leaf = true;
        }
        if (added < 3 && n_leaf)
            return false;
    }
    return true;
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
    for (int i = 2; i <= n; i++)
    {

        int u;
        cin >> u;

        adjList[u].push_back(i);
    }

    if (BFS(1))
        cout << "Yes\n";
    else
        cout << "No\n";
}