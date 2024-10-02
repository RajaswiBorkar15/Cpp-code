#include<bits/stdc++.h>
#include <string.h>

using namespace std;
 
int main(){
    int a , b;
    cin>> a>> b;
    int cnt = 0;
    while(a < b){
        cnt += 1;
        a = a * 3;
        b = b * 2;
    }
    if(a == b){
        cnt += 1;
    }
    cout<<cnt<<endl;
    return 0;
}
