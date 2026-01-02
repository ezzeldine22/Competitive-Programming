// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1.5e5 + 5;
int arr[N];
ll prefix[N]{};
int n, k;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int Min_pos = 1;

    for (int i = 1; i <= (n - (k - 1)); i++)
    {
        if (prefix[i + (k - 1)] - prefix[i - 1] < prefix[Min_pos + (k - 1)] - prefix[Min_pos - 1])
            Min_pos = i;
    }
    cout << Min_pos << endl;
}