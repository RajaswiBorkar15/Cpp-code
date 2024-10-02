#include<bits/stdc++.h>
#include <string.h>
#include<cctype>

using namespace std;
 
int main(){
    string s ;
    cin>>s;
    int n = s.length();
    int lower = 0 , upper = 0;
    //ASCII A-Z = (65,90)
    for(int i=0;i<n;i++){
        if(s[i] >= 65 && s[i] <= 90){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper == lower || upper < lower){
        for(int i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
    }else{
        for(int i=0;i<n;i++){
            s[i] = toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
