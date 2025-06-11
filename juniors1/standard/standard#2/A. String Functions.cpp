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
    // A. String Functions
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string queryString;
    int x, l, r, a, b;
    char c;
    while (q--) {
        cin >> queryString;
        if (queryString ==  "pop_back") {
            s.pop_back();
        } else if (queryString == "front") {
            cout << s[0] << endl;
        } else if (queryString == "back") {
            cout << s.back() << endl;
        } else if (queryString == "print") {
            cin >> x;
            x--;
            cout << s[x] << endl;
        } else if (queryString == "push_back") {
            cin >> c;
            s.push_back(c);
        } else if (queryString == "substr") {
            cin >> a >> b;
            l = min(a, b);
            r = max(a, b);
            l--;
            for (int i = l; i < r; i++) cout << s[i];
            cout << endl;
        } else if (queryString == "reverse") {
            cin >> a >> b;
            l = min(a, b);
            r = max(a, b);
            l--;
            reverse(s.begin()+l, s.begin()+r);
        } else if (queryString == "sort") {
            cin >> a >> b;
            l = min(a, b);
            r = max(a, b);
            l--;
            sort(s.begin()+l, s.begin()+r);
        }
    }
    return 0;
}
