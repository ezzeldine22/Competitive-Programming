// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/EzzEldine/Computer Science/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    vector<char> v(n);
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l{}, r{}, max_count{}, count{};
    while (r < k)
    {
        m[v[r]]++;
        if (m[v[r]] == 1)
            count++;
        r++;
    }
    max_count = count;
    while (r < n)
    {
        if (m[v[l]] == 1)
            count--;
        m[v[l++]]--;

        m[v[r]]++;
        if (m[v[r]] == 1)
            count++;

        r++;

        max_count = max(max_count, count);
    }
    cout << max_count << endl;
}