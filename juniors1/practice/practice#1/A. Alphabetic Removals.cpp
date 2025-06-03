#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // A. Alphabetic Removals
    ll n, k;
    cin >> n >> k;
    vector<ll> letters(26, 0);
    string str;
    cin >> str;
    if (k >= n) cout << "";
    else {
        for (char i: str) {
            letters[i - 'a']++;
        }
        int index = 0;
        while (k > 0) {
            if (k > letters[index]) {
                k -= letters[index];
                letters[index] = 0;
            } else {
                letters[index] -= k;
                k = 0;
            }
            index++;
        }
        string res;
        for (ll i = n - 1; i >= 0; i--) {
            if (letters[str[i] - 'a'] > 0) {
                res += str[i];
                letters[str[i] - 'a']--;
            }
        }
        reverse(res.begin(), res.end());
        cout << res;
    }
    return 0;
}
