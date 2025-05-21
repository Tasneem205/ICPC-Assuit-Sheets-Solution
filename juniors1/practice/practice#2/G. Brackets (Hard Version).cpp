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
    // G. Brackets (Hard Version)
    string s;
    getline(cin, s);
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else if (c == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        } else if (c == '}' && !st.empty() && st.top() == '{') {
            st.pop();
        } else if (c == ']' && !st.empty() && st.top() == '[') {
            st.pop();
        } else {
            cout << "no\n";
            return 0;
        }
    }
    if (st.empty()) cout << "yes\n";
    else cout << "no\n";
    return 0;
}
