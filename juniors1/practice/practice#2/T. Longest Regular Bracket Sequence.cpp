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
    // T. Longest Regular Bracket Sequence
    string s;
    cin >> s;
    ll maxLen = 0, num = 1;
    for (int i = 0; i < s.size()-1; i++) {
        stack<char> st;
        if (s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<') {
            // start the sequence
            st.push(s[i]);
            for (int j = i+1; j < s.size(); j++) {
                if (s[j] == '(' || s[j] == '{' || s[j] == '[' || s[j] == '<') {
                    st.push(s[j]);
                } else if (!st.empty() &&
                          ((s[j] == ')' && st.top() == '(') ||
                          (s[j] == '}' && st.top() == '{') ||
                          (s[j] == ']' && st.top() == '[') ||
                          (s[j] == '>' && st.top() == '<'))) {
                    st.pop();
                } else {
                    break;
                }
                if (st.empty()) {
                    // then I got a sequence
                    if (maxLen < j - i + 1) {
                        maxLen = j - i + 1;
                        num = 1;
                    } else if (maxLen == j - i + 1) num++;
                }
            }
        }
    }
    cout << maxLen << " " << num << endl;
    return 0;
}
