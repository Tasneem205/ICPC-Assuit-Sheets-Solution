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
    // E. Plug-in
    string s;
    getline(cin, s);
    string newStr;
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (!st.empty() && s[i] == st.top()) st.pop();
        else st.push(s[i]);
    }
    while (!st.empty()) {
        newStr += st.top();
        st.pop();
    }
    reverse(newStr.begin(), newStr.end());
    cout << newStr << endl;
    return 0;
}
