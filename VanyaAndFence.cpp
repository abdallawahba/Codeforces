#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int res=n;
    int x=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>m){res++;}
    }
    cout<<res<<endl;
    return 0;
}