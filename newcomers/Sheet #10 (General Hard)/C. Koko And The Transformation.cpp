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
    // C. Koko And The Transformation
    int n, m;
    cin >> n >> m;
    ll suma = 0, sumb = 0, x;
    while (n--) {
        cin >> x;
        suma += x;
    }
    while (m--) {
        cin >> x;
        sumb += x;
    }
    if (suma == sumb) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
