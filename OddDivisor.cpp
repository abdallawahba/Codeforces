#include<bits/stdc++.h>
#define int long long
using namespace std;
bool IsPrime(int x){
    int i;
    for(i=2;i<x&&x%i;i++){};
    return x==i;
}
bool poww(int x){
    int i;
    int y=2;
    for(i=1;pow(y,i)<=x;i++);
    return pow(y,i-1)==x;
}
signed main(){
    int in;
    cin>>in;
    for(int i=0;i<in;i++){
        int x;
        cin>>x;
        if(x%2){cout<<"YES"<<endl;}
        else{
            if(poww(x)){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
    }
}