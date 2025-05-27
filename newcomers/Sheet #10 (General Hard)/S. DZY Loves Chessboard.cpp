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
    // S chessboard
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    bool flip;
    for (int i = 0; i < n; i++) {
        flip = (i%2 == 0);
        for (int j = 0; j < m; j++) {
            flip = !flip;
            if (arr[i][j] != '-') {
                if (flip) {
                    arr[i][j] = 'B';
                } else {
                    arr[i][j] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
