#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
 
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
 
    // 1 2 3 4 5 6
    // 5 3 1 6 4 2
 
    // 1 2 3 4 5
    // 4 2 5 3 1
 
    if (n % 2 == 0) {
        for (int i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
    }
 
    else {
        for (int i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
    }
 
    return 0;
 
}
