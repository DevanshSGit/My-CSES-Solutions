#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
 
    ll t, x, y, z, z1, res;
    cin >> t;
 
    while (t--) {
        cin >> y >> x;
        z = max(x, y);
        z1 = (z-1)*(z-1);
        if (z % 2 == 0) {
            if (x == z) {
                res = z1 + y;
            }
            else {
                res = z1 + 2*z - x;
            }
        }
        else {
            if (y == z) {
                res = z1 + x;
            }
            else {
                res = z1 + 2*z - y;
            }
        }
        cout << res << '\n';
    }
 
 
    return 0;
 
}
