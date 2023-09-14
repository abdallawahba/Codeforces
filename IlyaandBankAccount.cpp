#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;
    int mx=n;
    int ld;
    if(n<0){
        mx=n/10;
        if((n%100)/10<=-1){
            ld=n%10;
            n/=100;
            n*=10;
            n+=ld;
            if(n>mx){mx=n;}
        }
    }
    cout<<mx<<endl;
}