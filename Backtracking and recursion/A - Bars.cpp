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

const int N = 20;
int tt, target, p, A[N];
int sum{};
bool valid = false;

void solve(int pos)
{
    if (pos == p) // base case
    {
        if (sum == target)
            valid = true;

        return;
    }

    if (sum + A[pos] <= target) // option 1 .. pick
    {
        sum += A[pos];  // do
        solve(pos + 1); // recurse
        sum -= A[pos];  // undo
    }
    solve(pos + 1); // option 2 leave
}
int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    cin >> tt;
    while (tt--)
    {

        cin >> target >> p;
        for (int i = 0; i < p; i++)
        {
            cin >> A[i];
        }
        valid = false;
        sum = 0;
        solve(0);
        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}