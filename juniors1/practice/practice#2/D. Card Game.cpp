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
    // D. Card Game
    string sm, sa, sr;
    getline(cin, sm);
    getline(cin, sa);
    getline(cin, sr);
    int mi = 0, ai = 0, ri = 0;
    int mn = sm.size(), an = sa.size(), rn = sr.size();
    char turn = 'm';
    while (mi != mn || ai != an || ri != rn) {
        if (turn == 'm') {
            if (mi == mn) break;
            turn = sm[mi];
            mi++;
        } else if (turn == 'a') {
            if (ai == an) break;
            turn = sa[ai];
            ai++;
        } else if (turn == 'r') {
            if (ri == rn) break;
            turn = sr[ri];
            ri++;
        }
    }
    cout << (char) toupper(turn) << endl;
    return 0;
}

