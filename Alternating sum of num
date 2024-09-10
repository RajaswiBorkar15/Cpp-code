// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main(){
    int t = 0;
    cin>>t;
//test cases
    while(t--){
        int n ;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum = 0;
// a1 -a2 + a3 - a4 + a5 - a6 for 6 ele array
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                sum += arr[i];
            }else{
                sum -= arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
