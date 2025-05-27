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
    // P. No Time for Dragons
    ll n;
    cin >> n;
    multimap<ll, pair<ll, ll>> soldiers;
    ll a, b;
    for (ll i = 0; i < n; i++) {
        cin >> a >> b;
        soldiers.insert({-(a-b), {a, b}});
    }
    ll sum = 0, cur = 0;
    for (auto & soldier : soldiers) {
        if (cur == 0) {
            sum += soldier.second.first;
            cur = soldier.second.first;
        } else if (soldier.second.first > cur){
            sum += soldier.second.first - cur;
            cur = soldier.second.first;
        }
        cur -= soldier.second.second;
    }
    cout << sum;
    return 0;
}
