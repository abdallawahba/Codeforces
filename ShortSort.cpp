#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c'){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}