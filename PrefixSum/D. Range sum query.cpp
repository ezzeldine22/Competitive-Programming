// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, q;
const int N = 1e5 + 1;

int Arr[N];
ll prefix[N]{};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        if (i > 0)
        {
            prefix[i] = prefix[i - 1] + Arr[i];
        }
        else
            prefix[i] = Arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        cout << (l == 0 ? prefix[r] : prefix[r] - prefix[l - 1]) << endl;
    }
}