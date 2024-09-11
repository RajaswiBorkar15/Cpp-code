// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    int arr[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int temp = 0;
    for(int i = 0;i<t;i++){
        int cnt =0;
        for(int j = 0;j<3;j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
        if(cnt >= 2){
            temp++;
        }
    }
    cout<<temp<<endl;
    return 0;
}
