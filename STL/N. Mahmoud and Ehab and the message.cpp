// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
const int N = 1e5 + 5;
int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, m, k;
    cin >> n >> k >> m;
    vector<string> words(n);
    map<int, int> costs;
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        costs[i + 1] = val;
    }
    for (int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        int min_cost = INT_MAX;
        if (num > 1)
        {
            vector<int> v_(num);
            while (num--)
            {
                int x;
                cin >> x;
                v_.push_back(x);
                if (costs[x] <= min_cost)
                {
                    min_cost = costs[x];
                }
                else
                {
                    costs[x] = min_cost;
                }
            }
            for (int i = 0; i < v_.size(); i++)
            {
                costs[v_[i]] = min_cost;
            }
        }
        else
        {
            int x;
            cin >> x;
        }
    }
    map<string, int> f_cost;
    for (int i = 0; i < n; i++)
    {
        f_cost[words[i]] = costs[i + 1];
    }
    ll sum = 0;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        sum += f_cost[s];
    }
    cout << sum;
}