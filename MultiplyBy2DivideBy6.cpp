#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;cin>>t;while(t--){
        int n,c=0;cin>>n;
        while(n){
            if(n==1){break;}
            else if(!(n%6)){n/=6;c++;}
            else if(!(n%3)){n*=2;c++;}
            else{c=-1;break;}
        }
        cout<<c<<endl;
    }
}