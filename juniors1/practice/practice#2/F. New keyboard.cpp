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

string s;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // F. New keyboard
    while (getline(cin, s)) {
        string newString;
        int home = 0, left = 0;
        for (char i : s) {
            if (i == '[') {
                home = 1;
                left = 0;
            } else if (i == ']') {
                home = 0;
            } else if (home == 1) {
                newString.insert(newString.begin() + left, i);
                left++;
            } else {
                newString += i;
            }
        }
        cout << newString << endl;
    }
    return 0;
}
