#include <iostream>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    ll n, result = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i-1]) {
            result += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    
    cout << result;
    
    return 0;
}
 
