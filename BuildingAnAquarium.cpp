#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int o;cin>>o;
    for(int l=0;l<o;l++){
        int n,x,s=0;cin>>n>>x;
        int arr[n];for(int i=0;i<n;i++){cin>>arr[i];s+=arr[i];}
        int g=0;
        sort(arr,arr+n);
        int h=x+1;
        for(int i=0;i<n;i++){g+=min(h,arr[i]);}
        bool f=1;
        while(f){
            if((h*n)-g<=x){f==0;break;}
            else{
                int c=n;int cc=n-1;
                for(int i=cc;i>-1;i--){if(arr[i-1]<arr[i]){c=n-i;cc=i-1;}break;}
                h--;
            }
        }
        cout<<h<<endl;
    }
}