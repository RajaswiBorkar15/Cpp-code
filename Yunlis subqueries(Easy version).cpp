// Online C++ compiler to run C++ program online
// not yet completed
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int checksubarray(int arr[],int k , int m,int l){
    int cnt =0;
    unordered_set<int> st;
    for(int i=k;i<m;i++){
        st.insert(arr[i]);
    }
    for(int i =1;i<st.size();i++){
        if(arr[i] > arr[i-1]){
            
        }else{
            cnt++;
        }
    }
    
    return cnt;
}
int main() {
    // Write C++ code here
    int n , s ;//,c; // n = array length, s = sub-array length, c = no of times subaaray would be made 
    cin>>n; 
    cin>>s; //<< c;
    int arr[n];
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }
    int start , end;

        cin>>start;
        cin>>end;
    int cnt = checksubarray(arr,start,end,s);
    cout<<cnt;
    return 0;
}
