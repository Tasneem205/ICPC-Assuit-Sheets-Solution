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
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // D. Hussien and Strings
    string value1,value2;
    cin >> value1 >> value2;
    if(value1.size() != value2.size()){
        cout<<"NO\n";
        return 0;
    }
    int flag = 0;
    if(value1 == value2){
        sort(value1.begin(),value1.end());
        for(int i=0; i < value1.size() - 1; i++){
            if(value1[i] == value1[i+1]){
                flag=1;
                break;
            }
        }
        if(flag == 1){
            cout << "YES\n" << endl;
        } else {
            cout << "NO\n" << endl;
        }
    } else {
        int dif = 0;
        int index1, index2;
        int counter = 0;
        bool close = true;
        for(int i=0; i < value1.size(); i++){
            if(value1[i] !=value2[i]){
                dif++;
                counter++;
            }
            if(dif == 1 && close){
                index1 = i;
                close = false;
            }
            if(dif == 2){
                index2 = i;
                break;
            }
        }
        if(counter == 2){
            swap(value1[index1], value1[index2]);
            if(value1 == value2){
                cout << "YES\n" << endl;
            } else {
                cout << "NO\n" << endl;
            }
        } else
            cout << "NO\n" << endl;
    }
    return 0;
}
