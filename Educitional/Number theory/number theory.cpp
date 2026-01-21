// -------------------- اللهم اني اسالك علما نافعا ورزقا طيبا وعملا متقبلا--------------------//
// ---------------------------اللهم صل وسلم على نبينا محمدﷺ -------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsOn(n, k) (((n) >> (k)) & 1)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define ll long long
#define ull unsigned long long
#define input freopen("H:/EzzEldine/Computer Science/C++ projects/in.txt", "r", stdin)
#define output freopen("H:/EzzEldine/Computer Science/C++ projects/out.txt", "w", stdout)
#define Free_palestine           \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

// 0>= fix_mod(a,b) < b

ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
//---------//

// vector<int> getDivisors(int n) {    // O(n)
//     vector<int> ret;
//     for (int i = 1; i <= n/2; i++) {
//         if (n%i == 0) {
//             ret.push_back(i);
//         }
//     }
//     return ret;
// }

vector<int> getDivisor(int a)
{

    vector<int> ret;
    int i = 1;
    for (i = 1; i * i < a; i++)
    {
        if (a % i == 0)
        {
            ret.push_back(i);
            ret.push_back(a / i);
        }
    }
    if (i * i == a)
        ret.push_back(i);
    return ret;
}

vector<int> getMultiples(int a, int n)
{

    vector<int> ret;
    for (int i = a; i <= n; i += a)
    {
        ret.push_back(i);
    }
    return ret;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d%c", v[i], " \n"[i + 1 == v.size()]);
    }
}

bool is_prime(int a)
{
    for (int i = 2; i * i < a; i++)
        if (a % i == 0)
            return false;
    return true;
}



int main()
{
    Free_palestine;
    cout << is_prime(36); // or check if the divisors number is exactly equal to 2
}