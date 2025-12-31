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

vector<ll> lucky_numbers;

void gen(ll st, ll end)
{
    if (st > end)
        return;
    lucky_numbers.push_back(st);
    st *= 10;

    gen(st + 4, end);
    gen(st + 7, end);
}
int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    ll n;
    cin >> n;
    gen(0, n);
    sort(lucky_numbers.begin(), lucky_numbers.end());

    for (int i = 0; i < lucky_numbers.size(); i++)
    {
        if (lucky_numbers[i] == n)
        {
            cout << i << endl;
            return 0;
        }
    }
}