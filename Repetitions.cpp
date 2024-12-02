#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
using ull = unsigned long long;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18 + 5;
 
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
 
#ifdef LOCAL
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif
 
void _print(int t) { cerr << t; }
void _print(long long t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
template <class T> void _print(vector<T> v) {
    cerr << "[ ";
    for (T i : v) { _print(i); cerr << " "; }
    cerr << "]";
}
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
 
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
 
void solve() {
 
  string s;
  cin >> s;
  ll cnt = 1;
  ll maxCount = 1;
  char currentChar = s[0];
  ll len = s.length();
  if (len == 1) {
    cout << 1;
    return;
  }
 
    for (ll i = 1; i < len; ++i) {
       if (s[i] == currentChar) {
        cnt++;
       }
       else {
        maxCount = max(cnt, maxCount);
        cnt = 1;
        currentChar = s[i];
       }
    }
 
    maxCount = max(cnt, maxCount);
 
    cout << maxCount;
 
}
 
int main() {
    fast_io();
 
    int t = 1;
    while (t--) {
        solve();
    }
 
    return 0;
}