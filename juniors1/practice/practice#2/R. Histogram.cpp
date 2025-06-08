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
    // R. Histogram
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        ll ans = 0;
        map<ll, ll> nums;
        vector<ll> prevS(n+1, -1), nextS(n+1, n);
        stack<ll> st1, st2;
        for (int i = 0; i < n; i++) {
            while (!st1.empty() && arr[i] < arr[st1.top()]) {
                st1.pop();
            }
            if (!st1.empty()) {
                prevS[i] = st1.top();
            }
            st1.push(i);
        }
        for (int i = 0; i < n; ++i) {
            while (!st2.empty() && arr[i] < arr[st2.top()]) {
                nextS[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }
        ll width;
        for (int i = 0; i < n; i++) {
            width = nextS[i] - prevS[i] - 1;
            ans = max(ans, (width * arr[i]));
        }
        cout << ans << endl;
    }
    return 0;
}
