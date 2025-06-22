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
    // G. All the Vowels Please
    ll k;
    cin >> k;
    string ans = "";
    if (k >= 25) {
        // there is a solution
        ll n = 5, m;
        while (k % n != 0 && n < k) n++;
        m = k / n;
        if (n >= 5 && m >= 5) {
            string str = "aeiou";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    ans += str[(i + j) % 5];
                }
            }
            cout << ans << endl;
        } else {
            cout << "-1\n";
        }
    } else {
        cout << "-1\n";
    }
    return 0;
}
