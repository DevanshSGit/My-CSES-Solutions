#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ios::sync_with_stdio();
   cin.tie(0);

   ll n;
   cin >> n;

   // n*(n+1)/2 % 2 != 0 --- NO
   // n mod 4 = 0 or 3  --- YES
   // n mod 4 = 1 or 2 --- NO
   // n = 7, sum = 28, I - {1,2,4,7}, II - {3,5,6}

   // for n mod 4 = 0
   // (i, i+1, i+2, i+3), sum: 4i + 6

   ll sum = n*(n+1)/2;
   if (sum % 2 != 0) {
    cout << "NO\n";
    return 0;
   }

   return 0;
}
