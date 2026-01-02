// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int num_of_stones, questions;
const int N = 1e5;

int costs[N];
ll prefix_sum[N];
ll sorted_prefix_sum[N];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    cin >> num_of_stones;
    for (int i = 0; i < num_of_stones; i++)
    {
        cin >> costs[i];
        prefix_sum[i] = (i == 0 ? costs[i] : prefix_sum[i - 1] + costs[i]);
    }

    sort(costs, costs + num_of_stones);
    for (int i = 0; i < num_of_stones; i++)
    {
        sorted_prefix_sum[i] = (i == 0 ? costs[i] : sorted_prefix_sum[i - 1] + costs[i]);
    }
    cin >> questions;

    int l, r, type;
    while (questions--)
    {
        ll answer;
        cin >> type >> l >> r;
        l--;
        r--;

        if (type == 1)
        {
            answer = (l == 0 ? prefix_sum[r] : prefix_sum[r] - prefix_sum[l - 1]);
        }
        else
        {
            answer = (l == 0 ? sorted_prefix_sum[r] : sorted_prefix_sum[r] - sorted_prefix_sum[l - 1]);
        }

        cout << answer << endl;
    }
}