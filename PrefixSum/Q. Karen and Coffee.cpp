// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 200005;
int n, k, q;
pair<int, int> arr[N];
ll Freq[N]{};
ll prefix_sum[N]{};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        // int l, r;
        // cin >> l >> r;
        // Freq[l]++;
        // if (r + 1 < N)
        //     Freq[r + 1]--;
        cin >> arr[i].first >> arr[i].second;
        Freq[arr[i].first]++;
        if (arr[i].second + 1 < N)
            Freq[arr[i].second + 1]--;
    }
    int Min = arr[0].first;
    int Max = arr[0].second;
    for (int i = 0; i < n; i++)
    {
        Min = min(arr[i].first, Min);
        Max = max(arr[i].second, Max);
    }

    for (int i = 1; i < N; i++)
    {
        Freq[i] += Freq[i - 1];
    }

    for (int i = 1; i < N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + (Freq[i] >= k);
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        b = min(b, Max);
        a = max(a, Min);
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }
}