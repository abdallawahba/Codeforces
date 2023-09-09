#include<bits/stdc++.h>
using namespace std;

int main(){
    bool flag=0;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        flag=x;
        if(flag==1){break;}
    }
    if(flag==0){cout<<"EASY"<<endl;}
    else{cout<<"HARD"<<endl;}
    return 0;
}