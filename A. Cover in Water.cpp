// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<string.h>
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        string s ;
        int len;
        cin>>len>>s;
        string pattern = "...";
        int i =0 , j = 0 , length = 0 , holes = 0;
        while(i < len){
            //keep count of cells to fill water
            if(s[i] == '.'){
                holes += 1;
            }
            // checking 3 consecutive '.' cells
            while(s[i] == pattern[j] && j < pattern.size()){
                i++;
                j++;
                length++;
            }
            // adding the cells to fill with water 
            //length -1 -> 1st ones is added in in if condn
            if(length > 0){
                holes += length -1;
            }
            // if we got the three consective '.' then we can remove water from middle and fill the other cells
            if(j == pattern.size()){
                break;
            }else{
            // if the we dont then start checking again for three '.'
                j = 0;
                length = 0;
            }
            i++;
        }
        // if their are 3 cell '.' then only 2 will be o/p
        if(length == 3){
            cout<<2<<endl;
        }else{
        // if their are no 3 cell '.'
            cout<<holes<<endl;
        }
    }

    return 0;
}
