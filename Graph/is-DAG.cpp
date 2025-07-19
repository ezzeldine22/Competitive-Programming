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

const int NOT_VISITED = 0, IN_PROGRESS = 1, VISITED = 2;

int vis[N];

vector<int> adjList[N];

bool isCyclic(int u)
{

    vis[u] = IN_PROGRESS;

    for (int v : adjList[u])
    {
        if (vis[v] == NOT_VISITED)
        {
            if (isCyclic(v))
                return true;
        }
        else if (vis[v] == IN_PROGRESS)
            return true;
    }

    vis[u] = VISITED;
    return false;
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
        if (vis[i] == NOT_VISITED)
        {
            if (isCyclic(i))
            {
                cout << "Cyclic";
                return 0;
            }
        }
    }
    cout << "Acyclic";
}

/*
 sample input :

6 7
5 0
0 4
0 1
1 2
1 4
2 0
2 3


*/