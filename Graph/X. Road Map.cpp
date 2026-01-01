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
#define Free_palestine           \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int N = 5e4 + 5;
vector<int> adjList[N];
bool vis[N];
int ans[N];

void DFS(int node)
{
    vis[node] = true;

    for (int v : adjList[node])
    {
        if (!vis[v])
        {
            ans[v] = node;
            DFS(v);
        }
    }
}

int main()
{
    Free_palestine

        int n,
        r1, r2;

    cin >> n >> r1 >> r2;
    for (int i = 1; i <= n; i++)
    {
        i += (i == r1);
        int ele;
        cin >> ele;
        adjList[i].push_back(ele);
        adjList[ele].push_back(i);
    }
    DFS(r2);
    for (int i = 1; i <= n; i++)
    {
        if (i == r2)
            continue;
        cout << ans[i] << " ";
    }
}