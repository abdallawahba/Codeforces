#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=1;i<n;i++){
        int f=i;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){f--;}
            else if(arr[j]>arr[i]){f++;}
        }
        if(f==0 || f== 2*i){c++;}
    }
    cout<<c<<endl;
}