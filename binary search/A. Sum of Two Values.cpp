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

const int N = 2e5 + 1;
pair<int, int> a[N];

int main()
{
    author_EzzEldine
#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int size, target;
    cin >> size >> target;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a, a + size);

    int start = 0, end = size - 1;
    while (start < end)
    {

        if (a[start].first + a[end].first > target)
            end--;
        else if (a[start].first + a[end].first < target)
            start++;
        else
        {
            cout << a[start].second << " " << a[end].second;
            return 0;
        }
    }
    cout << -1;
}
