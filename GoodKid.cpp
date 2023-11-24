#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int k;cin>>k;
    for(int l=0;l<k;l++){
        int n,idx,min=10;cin>>n;
        int s=1;
        int arr[n];for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){min=arr[i];idx=i;}
        }
        for(int i=0;i<n;i++){
            if(i==idx){arr[i]++;}
            s*=arr[i];
        }
        cout<<s<<endl;
    }
}