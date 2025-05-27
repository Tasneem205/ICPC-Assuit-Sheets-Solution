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
    // J. M-islands
    ll n, m, q;
    cin >> n >> m;
    vector<vector<ll>> ships;
    ll l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        ships.push_back({l, r});
    }
    sort(ships.begin(), ships.end());
    vector<vector<ll>> shipsRanges;
    for (auto & ship : ships) {
        if (shipsRanges.empty()) shipsRanges.push_back({ship[0], ship[1]});
        else {
            ll end = shipsRanges[shipsRanges.size()-1][1];
            if (ship[0] <= end) {
                // merge the two ranges
                shipsRanges[shipsRanges.size()-1][0] = min(shipsRanges[shipsRanges.size()-1][0], ship[0]);
                shipsRanges[shipsRanges.size()-1][1] = max(shipsRanges[shipsRanges.size()-1][1], ship[1]);
            } else {
                // add new range
                shipsRanges.push_back({ship[0], ship[1]});
            }
        }
    }
    cin >> q;
    ll u, v, x, y;
    bool yes;
    while (q--) {
        cin >> x >> y;
        u = min(x, y);
        v = max(x, y);
        yes = false;
        // binary search for it
        l = 0, r = shipsRanges.size() - 1;
        ll mid;
        while (r >= l) {
            mid = l + (r - l) / 2;
            if (shipsRanges[mid][0] <= u && shipsRanges[mid][1] >= v) {
                yes = true;
                break;
            } else {
                if (shipsRanges[mid][0] < u) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        (yes) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
