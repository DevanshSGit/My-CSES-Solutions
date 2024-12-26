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

   cout << "YES\n";

   ll t = sum/2;
   vector<ll> s1, s2;

   if (n % 4 == 0) {
    for (ll i = 1; i <= n; i += 4) {
        s1.push_back(i);
        s1.push_back(i+3);
        s2.push_back(i+1);
        s2.push_back(i+2);
    }
   }
   else if (n % 4 == 3) {
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(3);

    for (ll i = 4; i < = n; i += 4) {
        s1.push_back(i);
        s1.push_back(i+3);
        s2.push_back(i+1);
        s2.push_back(i+2);
    }
   }

   return 0;
}
