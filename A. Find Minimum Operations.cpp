#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,c=0;
		cin>>n>>k;
		if(k>1){
			while(n>0){
				c+=n%k;
				n/=k;
			}
		}
		else{
			c=n;
		}
		cout<<c<<endl;
	}
}
