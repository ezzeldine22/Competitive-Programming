// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1000;
int arr[N];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int best = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i - 1; j >= 0 && arr[j] <= arr[j + 1]; j--)
        {
            count++;
        }

        for (int j = i + 1; j < n && arr[j] <= arr[j - 1]; j++)
        {
            count++;
        }

        if (count > best)
        {
            best = count;
        }
    }

    cout << best;
    return 0;
}
