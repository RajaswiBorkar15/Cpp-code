// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    // Write C++ code here
    int x =0;
    int t;
    cin>>t;
    while(t--){
        string opr ;
        cin>>opr;
        if(opr == "++X" || opr =="X++"){
            x += 1;
        }
        if( opr == "--X" || opr == "X--"){
            x -= 1;
        }
    }
    cout<<x<<endl;
    return 0;
}
