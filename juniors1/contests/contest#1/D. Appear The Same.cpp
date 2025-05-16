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
    cin.tie(NULL);
    // D. Appear The Same
    string s;
    cin >> s;
    vector<int> arr(26, 0);
    for (auto i : s) {
        arr[i - 'a']++;
    }
    set<int> numbers;
    for (auto i : arr) {
        if (i != 0) numbers.insert(i);
    }
    if (numbers.size() == 1) {
        cout << "YES\n";
    } else if (numbers.size() == 2) {
        auto it = numbers.begin();
        int x = *it;
        ++it;
        int y = *it;
        int xx = 0, yy = 0;
        for (int i : arr) {
            if (i != 0) {
                if (i == x) xx++;
                else if (i == y) yy++;
            }
        }
        if ((x - y == 1 && xx == 1) || (y - x == 1 && yy == 1) || (x == 1 && xx == 1) || (y == 1 && yy == 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }
    return 0;
}
