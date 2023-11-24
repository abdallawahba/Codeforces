#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,x,c=0;;cin>>n;
    int arr[n+1]={0};
    for(int i=1;i<2*n-1;i++){cin>>x;arr[x]++;}
    for(int i=1;i<n+1;i++){if(arr[i]==1){c++;}}
    cout<<c<<endl;
}