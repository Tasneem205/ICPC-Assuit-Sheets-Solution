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
    // X. Strange Addition
    int n;
    cin >> n;
    int x;
    vector<int> resArr;
    int zero = -1, hundred = -1, tens = -1, nontens = -1, bas = -1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) {
            resArr.push_back(0);
        } else if (x == 100) {
            resArr.push_back(100);
        } else if (x >= 10) {
            if (x % 10 == 0) tens = x;
            else nontens = x;
        } else if (x >= 1 && x <= 9) {
            bas = x;
        }
    }
    if (bas != -1 && tens != -1) {
        resArr.push_back(bas);
        resArr.push_back(tens);
    } else if (bas != -1) {
        resArr.push_back(bas);
    } else if (tens != -1) {
        resArr.push_back(tens);
    } else if (nontens != -1){
        resArr.push_back(nontens);
    }
    cout << resArr.size() << endl;
    for (int i : resArr) {
        cout << i << " ";
    }
    return 0;
}
