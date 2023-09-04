#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long Int;
int main(){
    Int n;
    cin>>n;
    for(Int k=0;k<n;k++){
        Int input[4];
        for(Int i=0;i<4;i++){cin>>input[i];}
        Int min1=min(input[0],input[1]);
        Int min2=min(input[2],input[3]);
        Int max1=max(input[0],input[1]);
        Int max2=max(input[2],input[3]);
        if(max1<min2 || max2<min1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    return 0;
}