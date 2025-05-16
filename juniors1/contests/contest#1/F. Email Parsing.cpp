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

bool valid(const string& ss) {
    int at = 0, dot= 0, x = 0, y = 0;
    for (auto i : ss) {
        if (i == '@') at++;
        else if (i == '.') dot++;
    }
    if (at > 1 || dot > 1) return false;
    for (int i = 0; i < ss.length() - 1; i++) {
        if (i > 0 && ss[i] == '@' && ss[i+1] != '.') x++;
        else if (ss[i] == '.' && x > 0 && i != ss.length() - 1) y++;
    }
    if (x == 1 && y == 1) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // F. email parsing
    string s;
    cin >> s;
    if (valid(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
