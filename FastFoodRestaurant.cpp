#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;cin>>t;while(t--){
    int arr[3],z=0;cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=0;i<3;i++){if(arr[i]>0){arr[i]--;z++;}}
    sort(arr,arr+3);
    if(arr[2]&&arr[1]){arr[2]--;arr[1]--;z++;} if(arr[2]&&arr[0]){arr[2]--;arr[0]--;z++;} if(arr[1]&&arr[0]){arr[1]--;arr[0]--;z++;}
    if(arr[2]&&arr[1]&&arr[0]){z++;}
    cout<<z<<endl;
}}