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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     long long n, x;
    cin >> n >> x;

    map<long long, long long> seen;
    seen[0] = 1;

    long long pref = 0, ans = 0;
    for (long long i = 0, v; i < n; ++i) {
        cin >> v;
        pref += v;
        auto it = seen.find(pref - x);
        if (it != seen.end()) ans += it->second;
        ++seen[pref];
    }
    cout << ans << '\n';
    
    return 0;
}