#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        double x,y,z,m,r;
        cin>>x>>y>>z;
        m=(x+y)/2;
        r=m-min(x,y);
        if(x==y){cout<<0<<endl;}
        else if(r<=z){cout<<1<<endl;}
        else{
            cout<<ceil(r/z)<<endl; 
        }
    }
    return 0;
}