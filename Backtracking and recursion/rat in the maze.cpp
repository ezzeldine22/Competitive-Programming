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

const int N = 10;
int n, m;
string path;
char grid[N][N];
bool visited[N][N];

void solve(int r, int c)
{
    visited[r][c] = true;
    if (r == n - 1 && c == m - 1)
    {
        cout << path << endl;
        return;
    }

    if (c + 1 < m && grid[r][c + 1] != '#' && !visited[r][c + 1]) // right
    {
        path.push_back('R');
        solve(r, c + 1);
        path.pop_back();
    }
    if (c - 1 > 0 && grid[r][c - 1] != '#' && !visited[r][c - 1]) // left
    {
        path.push_back('L');
        solve(r, c + 1);
        path.pop_back();
    }
    if (r - 1 > 0 && grid[r - 1][c] != '#' && !visited[r - 1][c]) // top
    {
        path.push_back('T');
        solve(r, c + 1);
        path.pop_back();
    }
    if (r + 1 < n && grid[r + 1][c] != '#' && !visited[r + 1][c]) // down
    {
        path.push_back('D');
        solve(r + 1, c);
        path.pop_back();
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
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
    solve(2, 0);
    cout << path.size();
    return 0;
}