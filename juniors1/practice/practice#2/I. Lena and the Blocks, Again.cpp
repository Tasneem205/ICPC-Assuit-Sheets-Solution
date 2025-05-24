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
    // I. Lena and the Blocks, Again
    ll n, x;
    cin >> n;
    map<ll, vector<ll>> myMap;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        myMap[x].push_back(i);
    }
    auto firstPair = myMap.begin()->second;
    auto lastPair = prev(myMap.end())->second;
    ll ans = 100001;
    if (n == 1 || myMap.size() == 1) {
        ans = 0;
    } else {
        ll i = 0, j = 0;
        while (i < lastPair.size() && j < firstPair.size()) {
            ll dist = abs(lastPair[i] - firstPair[j]);
            ans = min(ans, dist);
            if (lastPair[i] < firstPair[j]) {
                ++i;
            } else {
                ++j;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
