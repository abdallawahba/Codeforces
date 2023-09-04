#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a,b,mx=0;
    long long x=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x+=b;
        x-=a;
        mx=max(mx,x);
    }
    cout<<mx<<endl;
    return 0;
}