// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
const int N = 2e3 + 5;
int arr[N];
int arr2[N];
int Maxes[N]{};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2, arr2 + n);
    int MaxProfit{};
    for (int i = n - 1; i >= (n - k); i--)
    {
        Maxes[arr2[i]]++;
        MaxProfit += arr2[i];
    }
    cout << MaxProfit << endl;
    int valid = 0, seq = 0;
    vector<int> days;
    for (int i = 0; i < n; i++)
    {
        seq++;
        if (Maxes[arr[i]] > 0)
        {
            valid++;
            Maxes[arr[i]]--;

            if (valid < k)
            {
                days.push_back(seq);
                seq = 0;
            }
        }
    }

    days.push_back(seq);

    for (int day : days)
    {
        cout << day << " ";
    }
}