#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int OO = 0x3f3f3f3f;

int n, m, d;
vector<vector<char>> grid;
vector<vector<int>> m_dis;
vector<vector<int>> p_dis;

int dR[] = {1, -1, 0, 0};
int dC[] = {0, 0, 1, -1};

bool isValid(int r, int c)
{
    return r >= 0 && r < n && c >= 0 && c < m;
}

void BFS_mon()
{
    m_dis.assign(n, vector<int>(m, OO));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'M')
            {
                q.push({i, j});
                m_dis[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nr = r + dR[k], nc = c + dC[k];
            if (isValid(nr, nc) && m_dis[nr][nc] == OO)
            {
                m_dis[nr][nc] = m_dis[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
}

int BFS_Player(int sr, int sc, int fr, int fc)
{
    if (m_dis[sr][sc] <= d)
        return -1;

    p_dis.assign(n, vector<int>(m, OO));
    queue<pair<int, int>> q;
    q.push({sr, sc});
    p_dis[sr][sc] = 0;

    while (!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        if (r == fr && c == fc)
            return p_dis[r][c];

        for (int k = 0; k < 4; k++)
        {
            int nr = r + dR[k], nc = c + dC[k];
            if (!isValid(nr, nc))
                continue;
            if (grid[nr][nc] == 'M')
                continue;
            if (p_dis[nr][nc] != OO)
                continue;
            if (m_dis[nr][nc] <= d)
                continue;

            p_dis[nr][nc] = p_dis[r][c] + 1;
            q.push({nr, nc});
        }
    }

    return -1;
}

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> n >> m >> d;

    grid.resize(n);
    m_dis.assign(n, vector<int>(m, OO));
    p_dis.assign(n, vector<int>(m, OO));

    pair<int, int> s, f;

    for (int i = 0; i < n; i++)
    {
        grid[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'S')
                s = {i, j};
            if (grid[i][j] == 'F')
                f = {i, j};
        }
    }

    BFS_mon();
    int res = BFS_Player(s.first, s.second, f.first, f.second);
    cout << res << '\n';
}
