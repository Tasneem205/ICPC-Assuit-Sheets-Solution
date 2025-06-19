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
    // E. Queue
    ll n, x;
    string query;
    cin >> n;
    deque<ll> queue;
    for (int i = 0; i < n; i++) {
        cin >> query;
        if (query == "push") {
            cin >> x;
            queue.push_back(x);
        } else if (query == "pop") {
            queue.pop_front();
        } else if (query == "front") {
            cout << queue.front() << endl;
        } else if (query == "back") {
            cout << queue.back() << endl;
        }
    }
    return 0;
}
