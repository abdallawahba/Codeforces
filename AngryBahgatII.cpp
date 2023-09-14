#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    string s,t;
    cin>>s>>t;
    bool f=s.find(t) !=string::npos;
    if(f==0){cout<<-1<<endl;}
    else{
        cout<<s.find(t)+1<<endl;
    }
}