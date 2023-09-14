#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,x,y;
    bool f=1;
    cin>>n;
    int frq[n+1]={0};
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        frq[arr[i]]++;
    }
    cin>>y;
    int arr2[y];
    for(int i=0;i<y;i++){cin>>arr2[i];frq[arr2[i]]++;}
    for(int i=1;i<=n;i++){
        if(frq[i]<1){f=0;}
    }
    if(f){cout<<"I become the guy."<<endl;}
    else{cout<<"Oh, my keyboard!"<<endl;}
}