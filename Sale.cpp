#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,m,s=0,mx=0;
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<m;i++){
        s+=vec[i];
        if(s<mx){mx=s;}
    }
    cout<<-1*mx<<'\n';
}