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

void DFS(int node)
{
    if (visited[node])
        return;
    else
        visited[node] = true;

    // cout << "Visiting Node " << node << endl;

    for (int n : Adj_List[node])
    {
        DFS(n);
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

        Adj_List[u].push_back(v);
        Adj_List[v].push_back(u);
    }
    int Connected_Components{};

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            Connected_Components++;
            DFS(i);
        }
    }
    cout << Connected_Components;
}