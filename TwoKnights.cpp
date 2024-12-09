#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ios::sync_with_stdio();
   cin.tie(0);

   ll n;
   cin >> n;


   for (ll k = 1; k <= n; ++k) {
   // Choosing two cells from k^2 cells
   // k^2 C 2 = (k^2 * (k^2 - 1))/2
    ll totalWays = (1LL*k*k) * (1LL*k*k-1)/2;
   // Number of attacking positions for two knights
   // 4*(k-1)*(k-2)
    ll attackingWays = 0;
    if (k > 2) {
        attackingWays = 4*(k-1)*(k-2);
    }
    ll nonAttackingWays = totalWays - attackingWays;
    cout << nonAttackingWays << '\n';
   }

   return 0;
}
