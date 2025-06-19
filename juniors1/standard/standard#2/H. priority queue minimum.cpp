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
    // H. priority queue minimum
    ll n, x;
    string query;
    cin >> n;
    priority_queue<ll> queue;
    for (int i = 0; i < n; i++) {
        cin >> query;
        if (query == "push") {
            cin >> x;
            queue.push(-x);
        } else if (query == "pop") {
            queue.pop();
        } else if (query == "top") {
            cout << queue.top() * -1 << endl;
        }
    }
    return 0;
}
