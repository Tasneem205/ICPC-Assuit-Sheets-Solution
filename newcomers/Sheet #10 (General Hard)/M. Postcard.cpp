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
    // M. Postcard
    string s;
    int k;
    cin >> s >> k;
    int candy = 0, snow = 0;
    int base_length = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?')
            candy++;
        else if (s[i] == '*')
            snow++;
        else base_length++;
    }

    if (k == base_length) {
        s.erase(remove(s.begin(), s.end(), '?'), s.end());
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        cout << s << endl;
    } else if (k > base_length) {
        if (snow > 0) {
            bool done = false;
            for (int i = 0; i < s.length() - 1; i++) {
                if (s[i] != '*' && s[i] != '?') {
                    cout << s[i];
                }
                if (!done && s[i+1] == '*') {
                    done = true;
                    int res = k - base_length;
                    while (res--) {
                        cout << s[i];
                    }
                }
            }
            if (s[s.length() - 1] != '*' && s[s.length() - 1] != '?') cout << s[s.length() - 1];
            cout << endl;
        } else {
            cout << "Impossible\n";
        }
    } else if (k < base_length) {
        if (candy + snow >= base_length - k) {
            int rem = base_length - k;
            for (int i = 0; i < s.size() - 1; i++) {
                if (rem > 0 && (s[i+1] == '*' || s[i+1] == '?')) {
                    rem--;
                    i++;
                } else if (s[i] != '*' && s[i] != '?'){
                    cout << s[i];
                }
            }
            if (s[s.length() - 1] != '*' && s[s.length() - 1] != '?') cout << s[s.length() - 1];
            cout << endl;
        } else {
            cout << "Impossible\n";
        }
    }
    return 0;
}
