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
    // F. Create The Teams
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<>());
        ll res = 0, cur = 1;
        for (auto s : arr) {
            if (s * cur >= x) {
                res += 1;
                cur = 0;
            }
            cur++;
        }
        cout << res << endl;
    }
    return 0;
}
