#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // B. Tickets
    ll n;
    cin >> n;
    queue<ll> que;
    ll a, x, y;
    vector<string> ans;
    while (n--) {
        cin >> a >> x;
        if (a == 1) {
            que.push(x);
        } else {
            y = que.front();
            que.pop();
            if (x == y) {
                ans.emplace_back("Yes");
            } else {
                ans.emplace_back("No");
            }
        }
    }
    for (const auto& i : ans) {
        cout << i << endl;
    }
    return 0;
}
