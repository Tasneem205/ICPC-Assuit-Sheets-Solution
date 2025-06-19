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
    // C. permutations
    ll n, x, q;
    string query, s;
    cin >> n >> q;
    cin >> s;
    while (q--) {
        cin  >> query >> x;
        if (query == "next_permutation") {
            while (x--) next_permutation(s.begin(), s.end());
        } else {
            while (x--) prev_permutation(s.begin(), s.end());
        }
        cout << s << endl;
    }
    return 0;
}

