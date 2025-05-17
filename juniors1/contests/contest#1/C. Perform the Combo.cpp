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
    // C. Perform the Combo
    int n, m, t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> letters(26, 0);
        vector<int> freq(n+1, 0);
        freq[0] = 1;
        int x;
        while (m--) {
            cin >> x;
            freq[0]++;
            freq[x] -= 1;
        }
        for (int i = 1; i < n; i++) {
            freq[i] += freq[i-1];
        }
        for (int i = 0; i < n; i++) {
            letters[s[i] - 'a'] += freq[i];
        }
        for (auto i : letters) cout << i << " ";
        cout << endl;
    }
    return 0;
}
