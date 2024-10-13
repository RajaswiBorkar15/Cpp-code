// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int gas_stn ,destn;
        cin>>gas_stn>>destn;
        int arr[gas_stn];
        for(int i=0;i<gas_stn;i++){
            cin>>arr[i];
        }
        int fuel = 0 ;
        //for 0 ---> x
        fuel = max(fuel,arr[0]);
        for(int i=1;i<gas_stn;i++){
            fuel = max(fuel,arr[i] - arr[i-1]);
        }
        fuel = max(fuel,2*(destn - arr[gas_stn - 1]));// from last gas station -----> destn and from destn ----> last gas station
        
        cout<<fuel<<endl;
        
    }

    return 0;
}
