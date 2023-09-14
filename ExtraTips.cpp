#include<bits/stdc++.h>
#define int long long
using namespace std;
int NumOfDigit(int x){
    int c=0;
    while(x>0){
        x/=10;
        c++;
    }
    return c;
}
int SumOfDigit(int x){
    int s=0;
    for(int i=1;i<=pow(10,NumOfDigit(x));i*=10){
        s+=(x%(i*10))/i;
    }
    return s;
}
signed main(){
    int n,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=SumOfDigit(arr[i]);
    }
    cout<<s<<endl;
}