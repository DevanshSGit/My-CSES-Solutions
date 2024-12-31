#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

ll modularExponentiation(ll base, ll exp, ll mod) {
    ll res = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res*base) % mod;
        }
        base = (base*base) % mod;
        exp = exp/2;
    }
    return res;
}

int main()
{
   ios::sync_with_stdio();
   cin.tie(0);

   ll n;
   cin >> n;
   cout << modularExponentiation(2, n, MOD);

   return 0;
}

