#include<bits/stdc++.h>
#include <string.h>
#include <map>
using namespace std;
 
int main(){
    string s ;
    cin>>s;
    int n = s.length();
    map<char,int> mp;
    for(int i=0;i<n;i++){
       mp[s[i]]++;
    }
    if(mp.size()%2 == 0){
        cout<<"CHAT WITH HER !"<<endl;
    }else{
        cout<<"IGNORE HIM !"<<endl;
    }
    return 0;
}
