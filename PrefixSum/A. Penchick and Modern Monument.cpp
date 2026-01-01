// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 51;
int t, n;
int arr[N];
int freq[N + 1];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    cin >> t;
    while (t--)
    {
        int op{};
        cin >> n;
        int Max{};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            Max = max(freq[arr[i]], Max);
        }

        cout << n - Max << endl;
    }
}