#include<bits/stdc++.h>
#include <string.h>
#include <cctype>
using namespace std;
 
int main(){
    string s ;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i] > s[j] && s[j] != '+'){
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
