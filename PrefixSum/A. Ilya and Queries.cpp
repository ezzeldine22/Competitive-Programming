#include <bits/stdc++.h>
using namespace std;

string s;
int queries, q;

const int N = 1e5;
int Arr[N + 2];

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    cin >> s >> queries;

    Arr[0] = 0;

    for (int i = 1; i < s.size(); i++)
    {

        Arr[i] += Arr[i - 1] + (s[i] == s[i - 1]);
    }

    while (queries--)
    {
        int l, r;

        cin >> l >> r;
        l--;
        r--;

        cout << Arr[r] - Arr[l] << endl;
    }
}