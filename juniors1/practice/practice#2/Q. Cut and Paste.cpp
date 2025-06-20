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
    // Q. Cut and Paste
    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        string s;
        cin >> s;
        constexpr ll MOD = 1'000'000'007;
        ll ls = s.length();
        vector<char> ss(s.begin(), s.end());
        for (ll i = 1; i <= x; i++) {
            int v = s[i-1] - '1';
            if (s.size() < x) {
                string sub(s.begin()+i, s.end());
                for (int j = 0; j < v; j++) {
                    s.insert(s.end(), sub.begin(), sub.end());
                }
            }
            ls = (ls + (ls-i) * v) % MOD;
        }
        cout << ((ls % MOD + MOD) % MOD) << '\n';
    }
    return 0;
}
