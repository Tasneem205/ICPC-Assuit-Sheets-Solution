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
    // L
    double l, s1, s2;
    int q;
    cin >> l >> s1 >> s2 >> q;
    double temp;
    while (q--) {
        cin >> temp;
        printf("%f\n", abs((sqrt(2) * (l - sqrt(temp)))/(s2 - s1)));
    }
    return 0;
}
