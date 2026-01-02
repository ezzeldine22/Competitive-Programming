#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   cin >> n;

   vector<int> sock_order(2 * n);
   for (int i = 0; i < 2 * n; i++)
   {
      cin >> sock_order[i];
   }

   vector<bool> on_table(n + 1, false);
   int current_socks = 0;
   int max_socks = 0;

   for (int sock : sock_order)
   {
      if (on_table[sock])
      {
         on_table[sock] = false;
         current_socks--;
      }
      else
      {
         on_table[sock] = true;
         current_socks++;
         max_socks = max(max_socks, current_socks);
      }
   }

   cout << max_socks << endl;
   return 0;
}
