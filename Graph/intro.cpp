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
const int M = 2e4 + 4, N = 1e3 + 3;

int n, m;
pair<int, int> EdgeList[M];

bool Adj_Matrix[N][N];

vector<int> Adj_List[N];

void printNeighborsof(int node) /// ==== > O(M)
{

    for (int i = 0; i < m; i++)
    {
        if (EdgeList[i].first == node)
            cout << EdgeList[i].second;
        else if (EdgeList[i].second == node)
            cout << EdgeList[i].first;
    }

    // adj matrix

    for (int i = 0; i < n; i++) // === > O(N)
    {
        if (Adj_Matrix[node][i])
            cout << i << endl;
    }

    for (int v : Adj_List[node]) // ==> O(Neighbors)
        cout << v << endl;
}
bool areNeighbors(int u, int v) // ====> O(M)
{
    // for (int i = 0; i < m; i++)
    // {
    //     if (EdgeList[i].first == u && EdgeList[i].second == v && EdgeList[i].first == v && EdgeList[i].second == u)
    //         return true;
    // }
    // return false;

    // return Adj_Matrix[u][v]; // O(1)

    for (int y : Adj_List[u]) // ==> O(Neighbors)
        if (y == v)
            return true;

    return false;
}

// Edge List == > memory ===> O(M)
// Adj Matrix ==> memory ===> O(N^2)

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
        int u, v;
        cin >> u >> v;
        EdgeList[i] = {u, v};

        Adj_Matrix[u][v] = true;
        Adj_Matrix[v][u] = true; // undirected

        Adj_List[u].push_back(v);
        Adj_List[v].push_back(u); // undirected
    }
}