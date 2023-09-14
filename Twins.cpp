#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ssum,count=0;
    int sum=ssum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ssum+=arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>-1;i--){
        sum+=arr[i];
        ssum-=arr[i];
        count++;
        if(sum>ssum){break;}
    }
    cout<<count<<endl;
    return 0;
}