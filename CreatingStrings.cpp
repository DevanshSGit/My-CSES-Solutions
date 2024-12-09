#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> res;
    do {
        res.push_back(str);
    }
    while (next_permutation(str.begin(), str.end()));
    cout << res.size() << '\n';
    for (string s : res) {
        cout << s << '\n';
    }
    return 0;

}
