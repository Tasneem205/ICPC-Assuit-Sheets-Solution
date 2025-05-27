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
    // B. Delete from the Left
    string s, t;
    cin >> s >> t;
    int i = s.length()-1, j = t.length()-1, c = 0;
    for (; i >= 0 && j >= 0;) {
        if (s[i] == t[j]) {
            c++;
            i--;
            j--;
        } else {
            break;
        }
    }
    cout << s.length() + t.length() - (2 * c);
    return 0;
}
