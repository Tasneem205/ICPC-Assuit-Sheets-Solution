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
    // I. Interesting drink
    ll n;
    cin >> n;
    vector<ll> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    sort(prices.begin(), prices.end());
    ll q, x;
    cin >> q;
    while (q--) {
        cin >> x;
        cout << upper_bound(prices.begin(), prices.end(), x) - prices.begin() << endl;
    }
    return 0;
}
