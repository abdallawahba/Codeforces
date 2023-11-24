#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;string s;cin>>n>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++){s[i]=toupper(s[i]);arr[s[i]%65]++;}
    for(int i=0;i<26;i++){if(arr[i]==0){cout<<"NO"<<endl;return 0;}}
    cout<<"YES"<<endl;
}