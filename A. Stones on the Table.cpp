#include<bits/stdc++.h>
#include <string.h>
#include<cctype>

using namespace std;
 
int main(){
    int a ;
    string s;
    cin>>a>>s;
    int n = s.length(), i=0,j=1;
    int cnt =0;
    while(j<n){
       if(s[i] == s[j]){
           cnt++;
       }
       i++;
       j++;
    }
    cout<<cnt<<endl;
}
