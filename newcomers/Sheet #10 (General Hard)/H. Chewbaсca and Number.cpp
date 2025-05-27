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
    // H. Chewbaсca and Number
    string number;
    getline(cin, number);
    for (int i = 0; i < number.size(); i++) {
        if (i == 0 && number[i] == '9') continue; 
        else if (number[i] >= '5') {
            number[i] = '9' - number[i] + '0';
        }
    }
    cout << number << endl;
    return 0;
}
