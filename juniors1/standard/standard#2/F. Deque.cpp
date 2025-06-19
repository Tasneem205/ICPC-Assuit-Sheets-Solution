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
    // F. Deque
    ll n, x;
    string query;
    cin >> n;
    deque<ll> dequeue;
    for (int i = 0; i < n; i++) {
        cin >> query;
        if (query == "push_back") {
            cin >> x;
            dequeue.push_back(x);
        } else if (query == "push_front") {
            cin >> x;
            dequeue.push_front(x);
        } else if (query == "pop_back") {
            dequeue.pop_back();
        } else if (query == "pop_front") {
            dequeue.pop_front();
        }else if (query == "front") {
            cout << dequeue.front() << endl;
        } else if (query == "back") {
            cout << dequeue.back() << endl;
        } else if (query == "print") {
            cin >> x;
            x--;
            cout << dequeue[x] << endl;
        }
    }
    return 0;
}
