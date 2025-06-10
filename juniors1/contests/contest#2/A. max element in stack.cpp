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
    // A. max element in stack
    ll n;
    cin >> n;
    stack<ll> st, maxSt;
    ll x;
    while (n--) {
        cin >> x;
        switch (x) {
            case 1: {
                cin >> x;
                st.push(x);
                if (maxSt.empty() || x > maxSt.top()) maxSt.push(x);
                else maxSt.push(maxSt.top());
                break;
            }
            case 2: {
                st.pop();
                maxSt.pop();
                break;
            }
        }
        cout << maxSt.top() << endl;
    }
    return 0;
}
