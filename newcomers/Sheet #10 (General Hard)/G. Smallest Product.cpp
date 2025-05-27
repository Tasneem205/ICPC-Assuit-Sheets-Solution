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
    // G
    ll n, ele;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ele;
        sum += log10(ele);
    }
    sum /= n;
    cout << (ll)pow(10, sum)+1;
    return 0;
}
