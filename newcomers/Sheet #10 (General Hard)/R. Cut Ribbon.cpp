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
    // R ribbons
    int a, b, c, n;
    cin >> n >> a >> b >> c;
    int mx = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int k = (n - a*i - b*j)/c;
            if (k < 0)
                k = 0;
            if (a*i + b*j + c*k == n)
                mx = max(mx, i+j+k);
        }
    }
    cout << mx;
    return 0;
}
