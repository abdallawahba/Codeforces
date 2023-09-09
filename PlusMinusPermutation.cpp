#include<bits/stdc++.h>
using namespace std;

int main(){
    long long v;
    cin>>v;
    for(long long h=0;h<v;h++){
        long long n,x,y,lcm,count,s=0;
        cin>>n>>x>>y;
        long long countofx=n/x;
        long long countofy=n/y;
        lcm=x*y/__gcd(x,y);
        count=n/lcm;
        s=(n*(n+1)/2)-(((n-(countofx-count))*(n-(countofx-count)+1))/2);
        s-=(countofy-count)*(countofy-count+1)/2;
        cout<<s<<endl;
    }
    return 0;
}