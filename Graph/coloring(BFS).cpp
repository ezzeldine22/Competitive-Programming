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

// if exists odd cycle ? ===> no Bicolorable

const int NOT_COLORED = 0, RED = 1, BLUE = 2, N = 1e5 + 5, M = 1e5 + 5;
int color[N];
vector<int> adjList[N];
bool isBiColorable(int src)
{

    memset(color, NOT_COLORED, sizeof color);
    color[src] = RED;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adjList[u])
        {
            if (color[v] == NOT_COLORED)
            {
                color[v] = (color[u] == RED ? BLUE : RED);

                q.push(v);
            }

            else if (color[v] == color[u])
                return false;
        }
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

    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    if (isBiColorable(0))
        cout << "YES";
    else
        cout << "NO";
}