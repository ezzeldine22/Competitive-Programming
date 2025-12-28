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

// const int N = 2e5 + 5;

int n, A[22];

ll total_sum{}, Min_Diff = INT_MAX;
void solve_Apple_Division(int idx, ll sum)
{
    // base case
    if (idx == n)
    {
        ll sum2 = total_sum - sum;
        Min_Diff = min(abs(sum2 - sum), Min_Diff);
        return;
    }

    solve_Apple_Division(idx + 1, sum + A[idx]);
    solve_Apple_Division(idx + 1, sum);
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
        cin >> A[i];
        total_sum += A[i];
    }

    solve_Apple_Division(0, 0);
    cout << Min_Diff;
}