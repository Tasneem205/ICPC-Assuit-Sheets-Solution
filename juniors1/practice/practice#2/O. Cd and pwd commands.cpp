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
    // O. Cd and pwd commands
    int n;
    cin >> n;
    string command;
    vector<string> tree;
    while (n--) {
        cin >> command;
        if (command == "pwd") {
            cout << "/";
            for (const auto& s : tree) {
                cout << s << "/";
            }
            cout << endl;
        } else if (command == "cd") {
            cin >> command;
            if (command[0] == '/') {
                tree.clear();
            }
            string cur;
            for (auto c : command) {
                if (c == '/') {
                    if (cur == ".." && !tree.empty()) tree.pop_back();
                    else if (!cur.empty()) tree.push_back(cur);
                    cur = "";
                } else {
                    cur += c;
                }
            }
            if (cur == ".." && !tree.empty()) tree.pop_back();
            else if (!cur.empty()) tree.push_back(cur);
        }
    }
    return 0;
}
