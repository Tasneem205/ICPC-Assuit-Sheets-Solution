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
    // S. Cairo
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        stack<int> temp;
        int idx = 1;
        for (int i = 0; i < n ; i++) {
            while (!temp.empty() && temp.top() == idx) {
                temp.pop();
                idx++;
            }
            if (nums[i] == idx) {
                idx++;
            } else {
                temp.push(nums[i]);
            }
        }
        while (!temp.empty() && temp.top() == idx) {
            idx++;
            temp.pop();
        }
        if (temp.empty() && idx == n+1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
