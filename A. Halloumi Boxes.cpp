// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n , q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool var = false;
        for(int i=1;i<n;i++){
            if(arr[i-1] > arr[i]){
                var = true;
                break;
            }
        }
        if(q<=1 && var){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
