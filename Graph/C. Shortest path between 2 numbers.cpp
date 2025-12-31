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
const int N = 1e4 + 4, OO = 0x3f3f3f3f;
int dis[N];
int target, n;
void BFS(int src)
{
    queue<int> q;
    memset(dis, OO, sizeof dis);
    q.push(src);
    dis[src] = 0;

    while (q.size())
    {
        int u = q.front();
        q.pop();

        if (u * 2 < N && dis[u * 2] == OO)
        {
            dis[u * 2] = dis[u] + 1;
            q.push(u * 2);
        }
        if (u - 1 > 0 && dis[u - 1] == OO)
        {
            dis[u - 1] = dis[u] + 1;
            q.push(u - 1);
        }

        if (u == target)
            break;
    }
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> target;
    BFS(n);

    cout << dis[target] << endl;
}