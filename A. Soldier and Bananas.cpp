#include<bits/stdc++.h>
#include <string.h>
#include<cctype>

using namespace std;
 
int main(){
    //price -> cost of 1 banana
    //dollar -> money that soldier have
    // banana -> no of banana to be bought
    // price of ith banana is i*price
    int price ,dollar, banana ;
    cin>>price>>dollar>>banana;
    int cost = 0;
    for(int i=1;i<=banana;i++){
        cost += i*price;
    }
    if(cost > dollar){
        cout<<cost-dollar<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
