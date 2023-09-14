#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(min(n,m)-ceil(min(m,n)/2)<=ceil(min(m,n)/2)){cout<<"Malvika"<<endl;}
    else{cout<<"Akshat"<<endl;}
    return 0;
}