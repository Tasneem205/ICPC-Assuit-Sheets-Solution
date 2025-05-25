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
    // Y. Spiral
    int n, m;
    cin >> n >> m;
    ll arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<ll> resArr;
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            resArr.push_back(arr[top][j]);
        }
        top++; // cause first row is done
        for (int i = top; i <= bottom; i++) {
            resArr.push_back(arr[i][right]);
        }
        right--; // cause last column is done
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                resArr.push_back(arr[bottom][j]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                resArr.push_back(arr[i][left]);
            }
            left++;
        }
    }
    for (ll L : resArr) cout << L << " ";
    return 0;
}
