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
    cin.tie(NULL);
    // E. Coke Challenge
    ll n;
    ll k, a;
    double ans = INFINITY;
    cin >> n >> k >> a;
    ll t, s;
    for (ll i = 0; i < n; i++) {
        cin >> t >> s;
        ll coke_per_cycle = a * t;
        ll cycles = (k + coke_per_cycle - 1) / coke_per_cycle; // ceiling using ints
        double time = (cycles - 1) * (t + s);
        ll coke_consumed = (cycles - 1) * coke_per_cycle;
        ll remaining = k - coke_consumed;
        time += (double) remaining / a;
        ans = min(ans, time);
    }
    cout << ll (ans) << endl;
    return 0;
}
