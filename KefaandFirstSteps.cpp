#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,mc,c;
    mc=c=0;
    cin>>n;
    unsigned long long arr[n+1]={0};
    for(unsigned long long i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){
            c++;
        }
        if(arr[i]<arr[i-1] || i==n){if(c>mc){mc=c;}c=1;}
    }
    cout<<mc<<endl;
    return 0;
}