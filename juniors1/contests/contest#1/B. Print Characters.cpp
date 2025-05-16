#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ull unsigned long long

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // B. Print Characters
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 0; i < n-1; i++)
            cout << "a ";
        cout << "b";
    } else {
        for (int i = 0; i < n; i++)
            cout << "a ";
    }
    cout << endl;
    return 0;
}
