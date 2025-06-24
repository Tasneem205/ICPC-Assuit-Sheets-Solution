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
    // E. Even But Not Even
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        vector<char> str(n);
        ll sum = 0;
        int removed = 0;
        for (int i = 0; i < n; i++) {
            cin >> str[i];
            sum += (str[i] - '0');
        }
        for (int i = str.size()-1; i >= 0; i--) {
            if ((str[i] - '0') % 2 == 0) {
                // then remove it
                sum -= (str[i] - '0');
                str[i] = '.';
                n--;
            } else {
                // then I need this number
                break;
            }
        }
        // check the sum and remove what's not the last digit
        int idx = 0;
        while (sum % 2 != 0 && idx < n-1) {
            if ((str[idx] - '0') % 2 == 1) {
                // remove it and here is a solution
                str[idx] = '.';
                removed++;
                break;
            }
            idx++;
        }
        if (idx == n-1 || removed == n) cout << "-1\n";
        else {
            for (auto i : str) {
                if (i != '.' && i != '0') cout << i;
            }
            cout << endl;
        }
    }
    return 0;
}
