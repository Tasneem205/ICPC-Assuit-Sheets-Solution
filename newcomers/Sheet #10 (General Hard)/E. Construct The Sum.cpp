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

ll sum(ll n) {
    return (n * (n+1))/2;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // E. Construct The Sum
    ll a, b, t;
    cin  >> t;
    while (t--) {
        cin >> a >> b;
        if (a >= b) {
            cout << "1 " << b << endl;
        } else if (sum(a) >= b) {
            vector<int> ss;
            for (ll i = a; b > 0 && i > 0; i--) {
                if (b >= i) {
                    b -= i;
                    ss.push_back(i);
                }
            }
            sort(ss.begin(), ss.end());
            cout << ss.size() << " ";
            for (int i : ss) {
                if (i == ss[ss.size()-1])
                    cout << i;
                else
                    cout << i << " ";
            }
            cout << endl;
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
