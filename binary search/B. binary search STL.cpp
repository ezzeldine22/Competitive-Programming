// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define author_EzzEldine         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    author_EzzEldine

#ifndef ONLINE_JUDGE
        freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    int n, q;
    cin >> n >> q;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    while (q--)
    {
        string op;
        cin >> op;
        if (op == "binary_search")
        {
            int ele;
            cin >> ele;
            if (binary_search(nums.begin(), nums.end(), ele))
                cout << "found\n";
            else
            {
                cout << "not found\n";
            }
        }
        else if (op == "upper_bound")
        {
            int ele;
            cin >> ele;
            auto up = upper_bound(nums.begin(), nums.end(), ele);
            if (up != nums.end())
            {
                cout << nums[up - nums.begin()] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (op == "lower_bound")
        {
            int ele;
            cin >> ele;
            auto low = lower_bound(nums.begin(), nums.end(), ele);
            if (low != nums.end())
            {
                cout << nums[low - nums.begin()] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}