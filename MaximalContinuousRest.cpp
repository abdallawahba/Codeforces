#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,c,m;
    c=m=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<2*n-1;i++){
        if(arr[i%n]==1){c++;}
        else{
            if(c>m){m=c;}
            c=0;
        }
    }
    cout<<m<<endl;
}