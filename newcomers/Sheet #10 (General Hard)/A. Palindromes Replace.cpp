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
    // A. Palindromes Replace
    string s;
    getline(cin, s);
    for (int i = 0; i*2 < s.length(); i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            if (s[i] == '?') {
                s[i] = s[s.length() - 1 - i];
            } else if (s[s.length() - i - 1] == '?') {
                s[s.length() - i - 1] = s[i];
            } else {
                cout << "-1\n";
                return 0;
            }
        } else if (s[i] == s[s.length() - 1 - i] && s[i] == '?') {
            s[i] = 'a';
            s[s.length() - 1 - i] = 'a';
        }
    }
    // check the middle of an odd-length string
    if (s.length() % 2 == 1) {
        if (s[s.length() / 2] == '?') s[s.length() / 2] = 'a';
    }
    cout << s << endl;
    return 0;
}
