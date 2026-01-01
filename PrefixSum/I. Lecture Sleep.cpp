#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 5;
int theorems[N], behaviour[N], additional_theorems[N];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> theorems[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> behaviour[i];
    }

    ll awake_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (behaviour[i])
        {
            awake_sum += theorems[i];
        }
        else
        {
            additional_theorems[i] = theorems[i];
        }
    }

    ll max_additional = 0, current_window_sum = 0;

    for (int i = 0; i < n; i++)
    {
        current_window_sum += additional_theorems[i];
        if (i >= k)
        {
            current_window_sum -= additional_theorems[i - k];
        }
        max_additional = max(max_additional, current_window_sum);
    }

    cout << awake_sum + max_additional << endl;

    return 0;
}
