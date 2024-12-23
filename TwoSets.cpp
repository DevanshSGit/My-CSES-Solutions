#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ios::sync_with_stdio();
   cin.tie(0);

   ll n;
   cin >> n;

   while (n != 0) {
    cout << n*(n+1)/2 << endl;
    cin >> n;
   }


   return 0;
}
