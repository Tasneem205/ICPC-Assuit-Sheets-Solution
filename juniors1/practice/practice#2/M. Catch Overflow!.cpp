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
    // M. Catch Overflow!
    int n;
    cin>>n;
    ll ans = 0;
    const ll INF = 1e10;
    stack<ll> c;
    c.push(1);
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        if(s == "for") {
            int z;
            cin>>z;
            c.push(c.top()*z);
            if(c.top() > INF) c.top() = INF;
        }
        else if(s == "end") {
            c.pop();
        }
        else if(s == "add") {
            ans += c.top();
            if(c.top() > 4294967295ULL) {
                cout<<"OVERFLOW!!!\n";
                return 0;
            }
        }
    }
    if(ans > 4294967295ULL) cout<<"OVERFLOW!!!\n";
    else cout<<ans<<'\n';
    return 0;
}
