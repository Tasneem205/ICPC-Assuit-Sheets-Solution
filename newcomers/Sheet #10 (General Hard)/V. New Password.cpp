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
    // V. New Password
    int n, k;
    cin >> n >> k;
    char letters[k];
    for (int i = 0; i < k; i++) {
        letters[i] = i + 'a';
    }
    for (int i = 0; i < n; i++) {
        cout << letters[i%k];
    }
    cout << endl;
    return 0;
}
