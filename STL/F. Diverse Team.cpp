// اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا
// اللهم صلي وسلم علي سيدنا محمد
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, k;
const int N = 1e2 + 2;
int found_before[N]{};
pair<int, int> p[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    int pos = 1;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (!found_before[x])
        {
            p[pos].first = x;
            p[pos].second = i;
            pos++;
            found_before[x] = true;
        }
    }

    if ((pos - 1) >= k)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= k; i++)
        {
            cout << p[i].second << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
