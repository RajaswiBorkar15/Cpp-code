// Online C++ compiler to run C++ program online
//solution of codeforce tarnsmission of code
#include<iostream>
#include<string.h>
using namespace std;
void match(string &t){
    int n = t.length();
    int i =0;
    int j =1;
    while(j<n){
        if(t[i] == t[j]){
            i++;
            j++;
        }else{
            j ++;
            i=0;
        }
    }
    
    if(i > j-i){
        cout<<"YES"<<endl;
        cout<<t.substr(0,i)<<endl;
    }else{
        cout<<"NO";
    }
}
int main(){
    string t;
    cin>>t;
    match(t);    
    return 0;
}
