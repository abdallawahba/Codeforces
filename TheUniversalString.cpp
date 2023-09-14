#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int r=0;r<n;r++){
        string s;
        cin>>s;
        int i=s[0];
        bool f=1;
        for(int j=1;j<s.size();j++){
            if(s[j]%26!=(i+1)%26){f=0; break;}
            i++;
        }
        if(f){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}