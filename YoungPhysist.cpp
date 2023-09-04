#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    int suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    if(suma==0&&sumb==0&&sumc==0){cout<<"YES\n";}
    else{cout<<"NO\n";}
 
    return 0;
}