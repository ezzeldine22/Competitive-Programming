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

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        input;
    output;
#endif

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        ll sum{};
        int pow = n - 1;
        vector<int> v2;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
            sum += (x * (1 << pow--));
        }

        v.push_back(sum);
    }

    for (int i = 0; i < (1 << n); i++)
    {
        int xr = 0;
        vector<int> v3;
        int fs = -1;
        for (int j = 0; j < n; j++)
        {
            if (IsOn(i, j))
            {
                xr ^= v[j];
                if (fs == -1)
                    fs = v[j];
                v3.push_back(i + 1);
            }
        }
        if (xr == 0 || xr == fs)
        {
            cout << v3.size() << endl;
            for (int i = 0; i < v3.size(); i++)
            {
                cout << v3[i] << " ";
                break;
            }
        }
    }

    return 0;
}