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

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, range, pos;
        cin >> n >> range >> pos;
        vector<vector<int>> nums;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> x;
        for (int i = 0; i < n; i++)
        {

            x.push_back(v[i]);
            if ((i + 1) % range == 0)
            {
                nums.push_back(x);
                x.clear();
            }
            if (i + 1 == n && !x.empty())
            {
                nums.push_back(x);
            }
        }

        for (auto x : nums)
        {
            for (auto z : x)
            {
                cout << z << " ";
            }
            cout << endl;
        }
        sort(nums[pos % range].begin(), nums[pos % range].end());
        cout << nums[pos % range][(pos % range) - 1] << endl;
    }
}

/* int n, range, pos;
        cin >> n >> range >> pos;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int sort_n = range;
        for (int i = 0; i < n; i++)
        {

            sort(nums.begin() + i, nums.begin() + i + range);
            if (i + range == n)
            {
                break;
            }
        }
        cout << nums[pos - 1] << endl;*/