#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>
#include <limits>
#include <functional>
#include <cmath>
#include <unordered_set>
#include <map>
#include <bits/stdc++.h>

using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

template<class T> using Vec   = vector<T>;
template<class T> using MinPQ = priority_queue<T, vector<T>, greater<T>>;

#define rep(i,n)        for (int i = 0; (i) < (n); ++(i))
#define rep1(i,a,b)     for (int i = (a); (i) <= (b); ++(i))
#define repd(i,n)       for (int i = (n)-1; (i) >= 0;  --(i))
#define all(x)          begin(x), end(x)
#define rall(x)         rbegin(x), rend(x)
#define sz(x)           (int)((x).size())
#define pb              push_back
#define eb              emplace_back

constexpr int  INF   = 1e9+5;
constexpr ll   INF64 = (1LL<<60);
constexpr int  MOD   = 1'000'000'007;

inline ll mod_pow(ll a, ll e, ll m = MOD) {
    ll res = 1;
    while (e) { if (e & 1) res = res * a % m; a = a * a % m; e >>= 1; }
    return res;
}
inline ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m-2, m); }

template<class T> bool chmin(T& a, const T& b){ return b < a ? (a = b, true) : false; }
template<class T> bool chmax(T& a, const T& b){ return b > a ? (a = b, true) : false; }

#ifdef LOCAL
  #define dbg(...) cerr << " [" << #__VA_ARGS__ << "] = ", _dbg(__VA_ARGS__)
  template<class T> void _dbg(const T& t){ cerr << t << '\n'; }
  template<class H, class... Ts> void _dbg(const H& h, const Ts&... ts){ cerr << h << ", "; _dbg(ts...); }
#else
  #define dbg(...) (void)0
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, target;
    cin >> n >> target;
    Vec<ll> arr(n);
    rep(i, n) cin >> arr[i];

     map<ll, int> idx;  

    for (int i = 0; i < n; ++i) {
        ll need = target - arr[i];
        auto it = idx.find(need);
        if (it != idx.end()) { 
            cout << it->second << ' ' << i + 1 << '\n';
            return 0;
        }
        idx[arr[i]] = i + 1;   
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}