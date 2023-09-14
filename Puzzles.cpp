#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,mn=1000;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<=m-n;i++){
        if(arr[i+n-1]-arr[i]<mn){mn=arr[i+n-1]-arr[i];}
    }
    cout<<mn<<endl;
    return 0;
}