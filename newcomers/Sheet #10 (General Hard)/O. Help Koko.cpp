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

bool isPrime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    // O. Help Koko
    int twos[] = {0, 2, 4, 8, 6};
    int threes[] = {0, 3, 9, 7, 1};
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int op;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == 1) {
            if (isPrime(arr[i])) {
                cout << (arr[i] * threes[(x%4)+1] * 5)%10;
            } else {
                cout << "-1";
            }
        } else {
                cout << (arr[i] * twos[(x%4)+1] * 5)%10;
        }
        cout << " ";
    }
    return 0;
}
