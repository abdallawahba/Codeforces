#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;
    string s="";
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            sum+=s[j]-'0';
        }
    }
    cout<<sum<<endl;
}