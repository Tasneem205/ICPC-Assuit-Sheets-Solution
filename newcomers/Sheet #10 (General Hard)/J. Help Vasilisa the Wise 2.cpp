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
    // J. Help Vasilisa the Wise 2
    int r1, r2, c1, c2, d1, d2, a, b, c, d;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    a = (d1 + r1 - c2) / 2;
    b = r1 - a;
    c = c1 - a;
    d = d1 - a;
    if (a == 0 || b == 0 || c == 0 || d == 0 ||
        a > 9 || b > 9 || c > 9 || d > 9 ||
        a == b || a == c || a == d ||
        b == c || b == d || c == d || 
        c + d != r2 || b + d != c2 || b + c != d2)
        cout << "-1\n";
    else {
        cout << a << " " << b << endl << c << " " << d << endl;
    }
    return 0;
}
