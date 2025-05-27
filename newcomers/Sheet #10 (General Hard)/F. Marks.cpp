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
    // F. Marks
    int n, m;
    cin >> n >> m;
    string arr[n];
    vector<int> st(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        int mx = 0;
        for (int j = 0; j < n; j++) {
            // first find the max value
            mx = max(mx, arr[j][i] - '0');
        }
        for (int j = 0; j < n; j++) {
            // set any student with max value to be best
            if (arr[j][i]-'0' == mx) {
                st[j]++;
            }
        }
    }
    int res = 0;
    for (int i : st) {
        if (i > 0)
            res++;
    }
    cout << res;
    return 0;
}
