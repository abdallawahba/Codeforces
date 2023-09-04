#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    int situation=1;
    for(int i=0;i<input.size()-1;i++){
        if(input[i]==input[i+1]){
            situation++; 
            if(situation==7){
                cout<<"YES";
                return 0;
                }
        }
        else{situation=1;}
    }
    cout<<"NO";
    return 0;
}