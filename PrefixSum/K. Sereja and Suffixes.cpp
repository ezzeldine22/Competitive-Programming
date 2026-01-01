// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int arr[N];
int distinct_count[N];
bool found_before[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= N; i++)
    {
        found_before[i] = false;
    }

    int distinct = 0;
    for (int i = n; i >= 1; i--)
    {
        if (!found_before[arr[i]])
        {
            found_before[arr[i]] = true;
            distinct++;
        }
        distinct_count[i] = distinct;
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << distinct_count[l] << endl;
    }

    return 0;
}
