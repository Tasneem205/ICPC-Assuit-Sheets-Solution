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
    // K. max element in stack
    stack<ll> nums;
    stack<ll> st;
    int n;
    cin >> n;
    ll q, x;
    while (n--) {
        cin >> q;
        switch (q) {
            case 1: {
                cin >> x;
                st.push(x);
                if (nums.empty() || x > nums.top()) {
                    nums.push(x);
                } else if (!nums.empty()){
                    nums.push(nums.top());
                }
                break;
            }
            case 2: {
                st.pop();
                nums.pop();
                break;
            }
            default: {
                break;
            }
        }
        cout << nums.top() << endl;
    }
    return 0;
}
