#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        temp[i] = 0;
    }
    int max_to_print = n;
    for(int i=0; i<n; i++){
        if(arr[i] == max_to_print){
            cout<<max_to_print<<" ";
            max_to_print--;
            while(temp[max_to_print] != 0){
                cout<<max_to_print<<" ";
                max_to_print--;
            }
            cout<<endl;
        }else{
            cout<<"\n";
            temp[arr[i]] = 1;
        }
    }
    return 0;
}
