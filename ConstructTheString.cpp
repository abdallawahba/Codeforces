#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;cin>>t;while(t--){
    string s="abcdefghijklmnopqrstuvwxyz";
    int n,a,b;cin>>n>>a>>b;
    char ss[n];
    int j=0;

    for(int i=0;i<n;i++){
        if(j==b){j=0;}
        ss[i]=s[j];j++;   
    }

    for(int i=0;i<n;i++){cout<<ss[i];}
    cout<<endl;
}}