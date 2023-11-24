#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c,x=0;
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[2]-arr[0]>1){
            arr[2]--;
            arr[0]++;
            if(arr[0]-1==arr[1]){arr[1]++;}
            else if(arr[2]+1==arr[1]){arr[1]--;}
        }
        else{
            if(arr[0]<arr[1]){arr[0]++;}
            if(arr[2]>arr[1]){arr[2]--;}
        }
        int ans=(arr[2]-arr[0])+(arr[1]-arr[0])+(arr[2]-arr[1]);
        cout<<ans<<endl;
    }
}