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
    // D. Stack
    ll q, x;
    cin >> q;
    stack<ll> st;
    string query;
    while (q--) {
        cin >> query;
        if (query == "push") {
            cin >> x;
            st.push(x);
        } else if (query == "pop") {
            st.pop();
        } else if (query == "top") {
            cout << st.top() << endl;
        }
    }
    return 0;
}

