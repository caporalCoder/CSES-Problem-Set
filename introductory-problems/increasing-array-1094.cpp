#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>
#include <limits>
#include <functional>
#include <cmath>
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

ll solve(Vec<ll>& arr) {
    ll number_of_move = 0;
    ll i = 1;
    while (i < sz(arr)) {
        if (arr[i] < arr[i - 1]) {
            number_of_move += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
        ++i;
    }
    return number_of_move;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    Vec<ll> arr(n);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << solve(arr) << endl;
    return 0;
}