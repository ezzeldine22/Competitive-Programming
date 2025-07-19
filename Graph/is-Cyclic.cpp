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

vector<int> Adj_List[N];
int n, m, u, v;

bool visited[N];

bool isCyclic(int node, int parent)
{
    visited[node] = true;

    for (int Neighbor : Adj_List[node])
    {
        if (visited[Neighbor] && Neighbor != parent)
            return true;
        else if (!visited[Neighbor])
        {
            if (isCyclic(Neighbor, node))
                return true;
        }
    }
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
    int st;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;

        Adj_List[u].push_back(v);
        Adj_List[v].push_back(u);

        st = u;
    }
    if (isCyclic(st, -1))
        cout << "Cyclic";
    else
        cout << "Acyclic";
}