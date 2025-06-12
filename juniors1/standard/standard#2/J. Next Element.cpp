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
    // J. Next Element
    ll n;
    cin >> n;
    vector<ll> arr(n), next(n);
    stack<ll> st;
    next[n-1] = -2;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    st.push(n-1);
    for (ll i = n-1; i >= 0; i--) {
        if (arr[i] < arr[st.top()]) {
            next[i] = st.top();
        } else {
            while (!st.empty() && arr[i] >= arr[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                next[i] = -2;
            } else {
                next[i] = st.top();
            }
        }
        st.push(i);
    }
    ll q, x;
    cin >> q;
    while (q--) {
        cin >> x;
        cout << next[x-1]+1 << endl;
    }
    return 0;
}
