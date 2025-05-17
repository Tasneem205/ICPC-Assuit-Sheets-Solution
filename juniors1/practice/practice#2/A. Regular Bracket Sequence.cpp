#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ull unsigned long long

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // A. Regular Bracket Sequence
    string str;
    cin >> str;
    stack<char> ss;
    int seqLen = 0;
    for (char i : str) {
        if (i == '(') {
            ss.push('(');
        } else if (i == ')') {
            if (!ss.empty()) {
                ss.pop();
                seqLen += 2;
            }
        }
    }
    cout << seqLen << endl;
    return 0;
}
