#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5, MOD = 1e9+7;
signed main(){
    int res;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(!(a%b)){cout<<0<<endl;}
        else if(a<b){res=b-a;cout<<res<<endl;}
        else{
            res=b-round(a%b);
            cout<<res<<endl;
        }
    }
}