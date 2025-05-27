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
    // U. From S To T
    int tt;
    string s, t, p;
    cin >> tt;
    while (tt--) {
        cin >> s >> t >> p;
        vector<int> PP(26, 0);
        for (char i : p) {
            PP[i - 'a']++;
        }
        bool can = true;
        int index = 0;
        for (char i : t) {
            if (i == s[index]) index++;
            else if (PP[i - 'a'] > 0) PP[i - 'a']--;
            else can = false;
        }
        if (index != s.length()) can = false;
        (can) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
