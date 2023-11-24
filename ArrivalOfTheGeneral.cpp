#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;cin>>n;int arr[n];int brr[n];for(int i=0;i<n;i++){cin>>arr[i];brr[i]=arr[i];}
    sort(brr,brr+n);int m,nn;
    for(int i=0;i<n;i++){
        if(arr[i]==brr[0]){m=i;}
    }
    for(int i=0;i<n;i++){
        if(arr[i]==brr[n-1]){nn=i;break;}
    }
    int c=nn+(n-1-m);
    if(nn>m){c--;}
    cout<<c<<endl;
}