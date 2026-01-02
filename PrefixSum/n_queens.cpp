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
int n;
char Grid[N][N];

bool isValid(int r, int c)
{
    for (int r2 = r - 1, c2 = c - 1; r2 >= 0 && c2 >= 0; r2--, c2--)
        if (Grid[r2][c2] == 'Q')
            return false;

    for (int r2 = r - 1, c2 = c + 1; r2 >= 0 && c2 < n; r2--, c2++)
        if (Grid[r2][c2] == 'Q')
            return false;

    for (int r2 = r - 1; r2 >= 0; r2--)
        if (Grid[r2][c] == 'Q')
            return false;

    return true;
}
void solve(int r)
{

    if (r == n) // base case
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << Grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\n----------------------------------------------------\n";
    }

    for (int c = 0; c < n; c++) // foreach option
    {
        if (isValid(r, c)) // isvalid
        {
            Grid[r][c] = 'Q'; // do
            solve(r + 1);     // recurse
            Grid[r][c] = '.'; // undo
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Grid[i][j] = '.';
        }
    }

    solve(0);
}