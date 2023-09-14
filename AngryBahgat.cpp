#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    string s,t;
    cin>>s>>t;
    bool f=s.find(t) !=string::npos;
    if(f==1){cout<<t<<endl;}
    else{cout<<"Angry"<<endl;}
}