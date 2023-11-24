#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int b;cin>>b;for(int i=0;i<b;i++){
    int n,v=3;
    bool f=1;
    cin>>n;
    while(f){
        if(!(n%v)){f=0;cout<<n/v<<endl;}
        else{
            v*=2;
            v++;
        }
    }
}
}