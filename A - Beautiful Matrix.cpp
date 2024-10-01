#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5][5];
	for(int i =0;i<5;i++){
	    for(int j =0;j<5;j++){
	        cin>>arr[i][j];
	    }
	}
	int x = 0 , y =0; 
	for(int i =0;i<5;i++){
	    for(int j =0;j<5;j++){
	        if(arr[i][j] == 1){
	            x = i;
	            y = j;
	        }
	    }
	}
	int var = abs(2-x) + abs(2-y);
	cout<<var<<endl;
}
