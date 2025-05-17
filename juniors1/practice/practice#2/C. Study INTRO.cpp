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
    // C. Study INTRO!
    ll n;
    cin >> n;
    stack<string> st;
    string cur;
    int header = 0;
    for (int i = 0; i < n; i++) {
        cin >> cur;
        if (i == 0 && cur != "Header") {
            st.push("wrongStart");
            break;
        }
        if (i == n - 1 && cur != "EndHeader") {
            st.push("Wrong");
            break;
        }
        if (cur[0] == 'E' && cur[1] == 'n' && cur[2] == 'd') {
            if (st.empty()) {
                st.push("wrongStart");
                break;
            }
            if (cur.find(st.top()) != string::npos) {
                st.pop();
            } else {
                st.push("wrongStart");
                break;
            }
        } else {
            if (cur == "Header") header++;
            st.push(cur);
        }
    }
    if (header == 1 && st.empty()) cout << "ACC\n";
    else cout << "WA\n";
    return 0;
}
