#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int s=k;
    for(int i=0;i<w;i++){
    n-=s;
    s+=k;
    }
    if(n<0){cout<<-1*n<<endl;}
    else{cout<<"0"<<endl;}
    return 0;
}