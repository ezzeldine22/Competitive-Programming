// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;
bool found_before[N]{};
vector<int> v;
int n, q;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (!found_before[x])
        {
            v.push_back(x);
            found_before[x] = true;
        }
    }
    sort(v.begin(), v.end());

    int size = v.size();

    while (q--)
    {
        int x;
        cin >> x;
        int less = lower_bound(v.begin(), v.end(), x) - v.begin();
        int great = size - (upper_bound(v.begin(), v.end(), x) - v.begin());
        cout << less << " " << great << endl;
    }
}