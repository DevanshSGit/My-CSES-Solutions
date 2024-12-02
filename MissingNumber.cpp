#include <iostream>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a, sum = 0;
 
    for (int i = 0; i < n-1; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << (n*(n+1))/2 - sum << endl;
 
       return 0;
}