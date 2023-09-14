#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,x,c=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){c++;}
        }
    }
    cout<<c<<endl;
}