#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <iomanip>

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // L. Pair of Topics
    ll n;
    cin >> n;
    vector<ll> delta(n);
    for (int i = 0; i < n; i++) {
        cin >> delta[i];
    }
    ll x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        delta[i] -= x;
    }
    sort(delta.begin(), delta.end());
    ll idx = 0, ans = 0, y;
    while (idx < n && delta[idx] <= 0) {
        // search for |delta[idx]| + 1 in delta
        y = abs(delta[idx]) + 1;
        auto it = lower_bound(delta.begin(), delta.end(), y);
        if (it != delta.end()) {
            ll found_idx = distance(delta.begin(), it);
            ans += n - found_idx;
        }
        idx++;
    }
    if (n - idx > 1) {
        n -= idx;
        n--;
        ans += (n * (n+1))/2;
    }
    cout << ans;
    return 0;
}
