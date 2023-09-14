#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin>>n;
    unsigned long long arr[n];
    for(unsigned long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(unsigned long long i=0;i<n;i++){cout<<arr[i]<<" ";}
    return 0;
}