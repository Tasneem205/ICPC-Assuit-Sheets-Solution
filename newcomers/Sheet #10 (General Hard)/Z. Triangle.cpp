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

ll lineLengthSquare(int x, int y, int z, int w) {
    ll dx = x - z;
    ll dy = y - w;
    return dx * dx + dy * dy;
}

bool checkTri(int x1, int y1, int x2, int y2, int x3, int y3) {
    ll line1 = lineLengthSquare(x1, y1, x2, y2);
    ll line2 = lineLengthSquare(x2, y2, x3, y3);
    ll line3 = lineLengthSquare(x1, y1, x3, y3);
    ll maxLine = max({line1, line2, line3});
    if (line1 + line2 + line3 - maxLine == maxLine && line1 > 0 && line2 > 0 && line3 > 0) return true;
    return false;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Z. Triangle
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (checkTri(x1, y1, x2, y2, x3, y3)) {
        cout << "RIGHT\n";
        return 0;
    } else if (checkTri(x1+1, y1, x2, y2, x3, y3) ||
            checkTri(x1-1, y1, x2, y2, x3, y3) ||
            checkTri(x1, y1+1, x2, y2, x3, y3) ||
            checkTri(x1, y1-1, x2, y2, x3, y3) ||
            checkTri(x1, y1, x2+1, y2, x3, y3) ||
            checkTri(x1, y1, x2-1, y2, x3, y3) ||
            checkTri(x1, y1, x2, y2+1, x3, y3) ||
            checkTri(x1, y1, x2, y2-1, x3, y3) ||
            checkTri(x1, y1, x2, y2, x3+1, y3) ||
            checkTri(x1, y1, x2, y2, x3-1, y3) ||
            checkTri(x1, y1, x2, y2, x3, y3+1) ||
            checkTri(x1, y1, x2, y2, x3, y3-1)) {
        cout << "ALMOST\n";
        return 0;
    }
    cout << "NEITHER\n";
    return 0;
}
