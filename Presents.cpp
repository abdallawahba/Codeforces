#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int arr[n+1]={0};
    int brr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        x=arr[i];
        brr[x]=i;
    }
    for(int i=1;i<=n;i++){cout<<brr[i]<<" ";}
    return 0;
}