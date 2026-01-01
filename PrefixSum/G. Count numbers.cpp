// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5;

int arr[N + 2]{};
vector<int> v;

int n, q, op, ele;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
    freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

    cin >> n >> q;
    while (q--)
    {
        cin >> op >> ele;

        if (op == 1)
        {
            v.push_back(ele);
            arr[ele]++;
        }
        else
        {
            cout << arr[ele] << endl;
        }
    }
}