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
    // I. Coins
    string line;
    int a = 0, b = 0, c = 0, q = 3;
    while (q--) {
        getline(cin, line);
        if (line[1] == '>') {
            switch (line[0]) {
                case 'A': {
                    a++;
                    break;
                }
                case 'B': {
                    b++;
                    break;
                }
                case 'C': {
                    c++;
                    break;
                }
            }
        } else { // = <
            switch (line[2]) {
                case 'A': {
                    a++;
                    break;
                }
                case 'B': {
                    b++;
                    break;
                }
                case 'C': {
                    c++;
                    break;
                }
            }
        }
    }
    if (a == 1 && b == 1 && c == 1) cout << "Impossible\n";
    else 
        for (int i = 0; i < 3; i++) {
            if (a == i) cout << 'A';
            else if (b == i) cout << 'B';
            else cout << 'C';
        }
    return 0;
}
