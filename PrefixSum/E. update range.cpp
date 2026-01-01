// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 1;
int n, q, l, r, val;
int arr[N];
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
        cin >> arr[i];
    }

    while (q--)
    {
        cin >> l >> r >> val;
        l--, r--;

        prefix[l] += val;
        if (r + 1 < n)
            prefix[r + 1] -= val;
    }

    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            prefix[i] += prefix[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] + prefix[i] << " ";
    }
}