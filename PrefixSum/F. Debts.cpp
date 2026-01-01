// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 1;
int arr[N];
ll prefix[N + 1]{};
int n, m;
int y, x, z;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        cin >> y >> x >> z;
        y--;
        x--;
        prefix[y] -= z;
        prefix[x] += z;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + prefix[i] < 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}