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
    // P. Valeriy and Deque
//    auto start = chrono::steady_clock::now();
    int n, m;
    cin >> n >> m;
    deque<ll> q;
    ll x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push_back(x);
    }
    ll mxIndex = 0;
    ll mx = *max_element(q.begin(), q.end());;
    map<ll, pair<ll, ll>> ans;
    ll index = 0, a, b;
    while (q.front() != mx) {
        mxIndex++;
        a = q.front();
        q.pop_front();
        b = q.front();
        q.pop_front();
        if (a > b) {
            q.push_front(a);
            q.push_back(b);
        } else {
            q.push_back(a);
            q.push_front(b);
        }
        index++;
        ans[index].first = a;
        ans[index].second = b;
    }
//    q.pop_front();
    vector<ll> arr;
    while (!q.empty()) {
        arr.push_back(q.front());
        q.pop_front();
    }
    for (int i = 0; i < m; i++) {
        cin >> x; // query
        if (x <= mxIndex) {
            cout << ans[x].first << " " << ans[x].second << endl;
        } else {
//            cout << "INDX" << (x - (mxIndex + 2)) % (n - 1) + 1 << endl;
            cout << mx << " " << arr[(x - (mxIndex + 1)) % (n - 1) + 1] << endl;
        }
    }
//    auto finish = chrono::steady_clock::now();
//    auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(finish - start);
//    cerr << endl << "Time: " << elapsed_ms.count() << " ms\n";
    return 0;
}
