// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    // Write C++ code here
    int n , k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int kwinner = arr[k];
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(arr[i] > 0 && arr[i] >= kwinner){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
