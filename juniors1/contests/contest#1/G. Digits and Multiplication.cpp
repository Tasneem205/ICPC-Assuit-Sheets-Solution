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

ll f(ll a, ll b) {
    return max(floor(log10(a)) + 1, floor(log10(b)) + 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // G. Digits and Multiplication
    ll n;
    cin >> n;
    ll ans = 11;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans = min(ans, f(i, n / i));
        }
    }
    cout << ans << endl;
    return 0;
}
