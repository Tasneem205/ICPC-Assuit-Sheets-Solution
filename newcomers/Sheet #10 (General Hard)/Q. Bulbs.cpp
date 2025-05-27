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
    // Q bulbs
    int sum = 0, n;
    cin >> n;
    vector<bool> vb(n+2, false);
    int light = 0;
    int min = 1, temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        light++;
        vb[temp] = true;
        if (temp == min) {
            for (int j = min; j <= n+1; j++) {
                if (!vb[j]) {
                    min = j;
                    break;
                }
            }
            if (min-1 == light)
                sum++;
        }
    }
    cout << sum;
    return 0;
}
