# CSES Problem Set Solutions 📚

This repository contains my personal solutions to the full **[CSES Problem Set](https://cses.fi/problemset/list/)**, neatly organised by topic.  
The aim is to keep every solution easy to browse, well-documented, and ready to compile/run offline when practising for contests.

---

## 📂 Directory Overview

| Category | Quick Link | Typical Techniques |
| -------- | --------- | ------------------ |
| Introductory Problems | [`introductory-problems/`](introductory-problems/) | brute force, prefix sums |
| Sorting and Searching | [`sorting-and-searching/`](sorting-and-searching/) | binary search, two-pointers, greedy |
| Dynamic Programming | [`dynamic-programming/`](dynamic-programming/) | 1-D & 2-D DP, state optimisation |
| Graph Algorithms | [`graph-algorithms/`](graph-algorithms/) | BFS/DFS, Dijkstra, SCC, MST |
| Advanced Graph Problems | [`advanced-graph-problems/`](advanced-graph-problems/) | flow, matching, cycle detection |
| Tree Algorithms | [`tree-algorithms/`](tree-algorithms/) | Euler tour, LCA, heavy-light |
| Range Queries | [`range-queries/`](range-queries/) | Fenwick, segment tree, sparse table |
| Geometry | [`geometry/`](geometry/) | line sweep, orientation tests |
| Mathematics | [`mathematics/`](mathematics/) | modular arith., combinatorics |
| Bitwise Operations | [`bitwise-operations/`](bitwise-operations/) | bit DP, masks |
| String Algorithms | [`string-algorithms/`](string-algorithms/) | KMP, Z-function, suffix array |
| Sliding-Window Problems | [`sliding-window-problems/`](sliding-window-problems/) | deque optimisation |
| Construction Problems | [`construction-problems/`](construction-problems/) | explicit output building |
| Counting Problems | [`counting-problems/`](counting-problems/) | inclusion–exclusion, DP |
| Interactive Problems | [`interactive-problems/`](interactive-problems/) | interactive I/O patterns |
| Advanced Techniques | [`advanced-techniques/`](advanced-techniques/) | Mo’s algo, divide & conquer DP |
| Additional Problems Ⅰ | [`additional_problems_1/`](additional_problems_1/) | extra tasks outside the main list |
| Additional Problems Ⅱ | [`additional_problems_2/`](additional_problems_2/) | more extras & experiments |

Feel free to explore any folder to see individual problems and their explanations.

---

## ⏩ Quick Links

> **Shortcut:** paste the following in the VS Code command palette (`⌘/Ctrl + P`) to open a category directly:  
> `./<folder-name>` &nbsp;→ e.g. `./dynamic-programming`

---

## 🛠 How to Run

```bash
# Example for C++ solutions
g++ -std=c++20 -O2 -Wall path/to/solution.cpp -o solution
./solution < input.txt


```c++
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

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}
```