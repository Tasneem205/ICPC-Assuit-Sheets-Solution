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
    // D. Selling Hamburgers
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<>());
        ll ans = 0, new_ans = 0;
        for (int i = 0; i < n; i++) {
            new_ans = arr[i] * (i+1);
            ans = max(ans, new_ans);
        }
        cout << ans << endl;
    }
    return 0;
}
