#include <iostream>
#include <map>
using namespace std;

int main() {
    //Easter Eggs
    map<char, int> colors;
    string choices = "ROYGBIV";
    colors['R'] = 1;
    colors['O'] = 1;
    colors['Y'] = 1;
    colors['G'] = 1;
    colors['B'] = 1;
    colors['I'] = 1;
    colors['V'] = 1;
    int n;
    cin>>n;
    string ans = "";
    for(int i=0; i<n; i++){
        if(i == n-3){
            colors[ans[0]] = -3;
            colors[ans[1]] = -4;
            colors[ans[2]] = -5;
        }
        for(int j=i%7; j<7; j++){
            if(colors[choices[j]] >= 1){
                ans += choices[j];
                colors[choices[j]] = -3;
                break;
            }
        }
        colors['R'] += 1;
        colors['O'] += 1;
        colors['Y'] += 1;
        colors['G'] += 1;
        colors['B'] += 1;
        colors['I'] += 1;
        colors['V'] += 1;
    }
    cout<<ans;
    return 0;
}
