// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p = s.length();
        if(p > 10){
            int ch = p - 2;
            string ans = s[0] + to_string(ch) + s[p-1];
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}

Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis4

Output:
word
l10n
i18n
p43s
