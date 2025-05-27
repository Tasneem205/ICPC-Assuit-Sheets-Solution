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
    // N
    ll a, b, c;
    cin >> a >> b >> c;
    ll mn = min(a, min(b, c));
    ll ans = mn;
    a -= mn;
    c -= mn;
    ans += min(c, a/2);
    cout << ans;
    return 0;
}
