#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> weight(n);
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }

        ll alice_candy = 0, bob_candy = 0;
        int left = 0, right = n - 1;
        int ans = 0;

        while (left <= right)
        {
            if (alice_candy <= bob_candy)
            {
                alice_candy += weight[left++];
            }
            else
            {
                bob_candy += weight[right--];
            }

            if (alice_candy == bob_candy)
            {
                ans = left + (n - right - 1);
            }
        }

        cout << ans << "\n";
    }
}
