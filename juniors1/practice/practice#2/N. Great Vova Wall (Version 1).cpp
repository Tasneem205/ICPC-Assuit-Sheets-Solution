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
    // N. Great Vova Wall (Version 1)
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x & 1;
    }
    stack<int> st;
    for (auto i : arr) {
        if (!st.empty() && st.top() == i)
            st.pop();
        else st.push(i);
    }
    if (st.size() <= 1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
