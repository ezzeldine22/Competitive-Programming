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

const int N = 1e5 + 5;
vector<int> adjList[N];
bool vis[N];

priority_queue<int, vector<int>, greater<int>> pq; // min heap
vector<int> ans;

int n, m, u, v;
void BFS(int src)
{
    pq.push(1);
    vis[1] = true;

    while (pq.size())
    {
        int u = pq.top();
        pq.pop();
        ans.push_back(u);
        for (int x : adjList[u])
        {
            if (!vis[x])
            {
                pq.push(x);
                vis[x] = true;
            }
        }
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
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    BFS(1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}