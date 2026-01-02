// بسم الله نبدا اللهم علمنا بما ينفعنا وانفعنا بما علمتنا وزدنا بك علما
// صلي علي النبي

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
char x;
const int N = 26;
int freq[N];
int main()
{
#ifndef ONLINE_JUDGE
   freopen("H:/CS/C++ projects/PrefixSum/input.txt", "r", stdin);
   freopen("H:/CS/C++ projects/PrefixSum/output.txt", "w", stdout);
#endif

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> x;
      freq[x - 'a']++;
   }

   for (char c = 'a'; c <= 'z'; c++)
   {
      for (int i = 0; i < freq[c - 'a']; i++)
      {
         cout << c;
      }
   }
}