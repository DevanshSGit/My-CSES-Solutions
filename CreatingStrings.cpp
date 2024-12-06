#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    // distinct permutations
    // n!/a!b!c!.....

    string str;
    cin >> str;
    cout << '\n';

    do {
        cout << str << '\n';
    }
    while (next_permutation(str.begin(), str.end()));
    cout << str << '\n';

    return 0;

}
