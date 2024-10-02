#include<bits/stdc++.h>
#include <string.h>
#include<cctype>

using namespace std;
 
int main(){
    int num , sub;
    cin>>num>>sub;
    for(int i =0;i<sub;i++){
        // if unit place have 0
        if(num % 10 == 0){
            num = num /10;
        }else{
        // if unit place have non-zero num
            num = num -1;
        }
    }
    cout<<num<<endl;
    return 0;
}
