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
    // H. Ada and Queue
    int t;
    cin >>  t;
    deque<int> q;
    string query;
    int x, reversed = 0;
    while (t--) {
        cin >> query;
        if (query == "front") {
            if (!q.empty()) {
                if (reversed) {
                    cout << q.back() << endl;
                    q.pop_back();
                } else {
                    cout << q.front() << endl;
                    q.pop_front();
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if (query == "back") {
            if (!q.empty()) {
                if (reversed) {
                    cout << q.front() << endl;
                    q.pop_front();
                } else {
                    cout << q.back() << endl;
                    q.pop_back();
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if (query == "reverse") {
            if (reversed == 1) reversed = 0;
            else reversed = 1;
        } else if (query == "push_back") {
            cin >> x;
            if (reversed) q.push_front(x);
            else q.push_back(x);
        } else if (query == "toFront") {
            cin >> x;
            if (reversed) q.push_back(x);
            else q.push_front(x);
        }
    }
    return 0;
}
