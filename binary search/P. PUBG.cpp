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

    int n, x;
    cin >> n >> x;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), [](const int &a, const int &b)
         {
             if (abs(a) == abs(b) && (a < 0 || b < 0))
             {
                 return a > b;
             }else{
                return abs(a)<abs(b);
             } });
    int min_sum = INT_MAX, a, b;
    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1, r = n - 1, diff;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (vec[i] != vec[mid])
            {
                diff = abs(vec[i] - vec[mid]);
                if (diff <= x)
                {
                    int sum = vec[i] + vec[mid];
                    if (sum < min_sum)
                    {
                        min_sum = sum;
                        a = vec[i];
                        b = vec[mid];
                    }
                    l = mid + 1;
                }
                else if (diff > x)
                {
                    r = mid - 1;
                }
            }
        }
    }
    cout << a << " " << b;
}
