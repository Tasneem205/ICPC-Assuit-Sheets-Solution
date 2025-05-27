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
    // W. Hussien and Arrays 2
    ll n;
    cin >> n;
    ll arr[n];
    priority_queue<pair<ll, ll>> pq;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        pq.push(make_pair(arr[i], i));
    }
    ll res = -1;
    for (ll i = 0; i < n; i++) {
        while (!pq.empty() && pq.top().first >= arr[i]) {
            res = max(res, pq.top().second - i);
            pq.pop();
        }
    }
    cout << res << endl;
    return 0;
}
