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
    // A. Cinema Row
    ll n;
    cin >> n;
    ll arr[n];
    ll left[n], right[n];
    left[0] = 0;
    right[n-1] = 0;
    ll curMax = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        curMax = max(curMax, arr[i]);
        if (arr[i] >= curMax) left[i] = 0;
        else left[i] = 1;
    }
    curMax = 0;
    for (ll i = n-1; i >= 0; i--) {
        curMax = max(curMax, arr[i]);
        if (arr[i] >= curMax) right[i] = 0;
        else right[i] = 1;
    }
    for (ll i = 0; i < n; i++) {
        if (left[i] == 0 && right[i] == 0) cout << "both\n";
        else if (left[i] == 0) cout << "left\n";
        else if (right[i] == 0) cout << "right\n";
        else cout << "none\n";
    }
    return 0;
}
