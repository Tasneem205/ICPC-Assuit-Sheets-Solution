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
    // B. binary search STL
    ll n, x, q;
    string query;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    while (q--) {
        cin >> query >> x;
        if (query == "lower_bound") {
            ll i = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            if (i >= 0 && i < n) cout << arr[i] << endl;
            else cout << "-1" << endl;
        } else if (query == "upper_bound") {
            ll i = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
            if (i >= 0 && i < n) cout << arr[i] << endl;
            else cout << "-1" << endl;
        } else if (query == "binary_search") {
            ll i = binary_search(arr.begin(), arr.end(), x);
            if (binary_search(arr.begin(), arr.end(), x)) cout << "found\n";
            else cout << "not found\n";
        }
    }
    return 0;
}
