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

    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;

        vector<int> heights(n);
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        stack<int> s;
        ll max_area{};
        int i = 0;

        while (i < n)
        {

            if (s.empty() || heights[s.top()] <= heights[i])
            {
                s.push(i++);
            }
            else
            {

                int top = s.top();
                s.pop();

                ll width = s.empty() ? i : i - s.top() - 1;
                ll area = heights[top] * width;
                max_area = max(max_area, area);
            }
        }

        while (!s.empty())
        {
            int top = s.top();
            s.pop();

            ll width = s.empty() ? i : i - s.top() - 1;
            ll area = heights[top] * width;
            max_area = max(max_area, area);
        }

        cout << max_area << endl;
    }
}
