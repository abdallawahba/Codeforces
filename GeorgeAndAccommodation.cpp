#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    int arr[2];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[0]>>arr[1];
        if(arr[1]-arr[0]>1){count++;}
    }
    cout<<count<<endl;
    return 0;
}