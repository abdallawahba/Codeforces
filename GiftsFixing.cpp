#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long Int;
int main(){
    Int numoftst;
    cin>>numoftst;
    for(Int i=0;i<numoftst;i++){
        Int numofgft=0;
        Int count=0;
        cin>>numofgft;
        Int arr[numofgft];
        Int brr[numofgft];
        for(Int k=0;k<numofgft;k++){cin>>arr[k];}
        for(Int k=0;k<numofgft;k++){cin>>brr[k];}
        Int amin=arr[0];
        Int bmin=brr[0];
        for(Int k=0;k<numofgft;k++){if(arr[k]<amin){amin=arr[k];}if(brr[k]<bmin){bmin=brr[k];}}
        Int x=0;
        for(Int k=0;k<numofgft;k++){
            bool flag=0;
            if(arr[k]>amin&&brr[k]>bmin){
                x=min(arr[k],brr[k]);
                if(min(arr[k],brr[k])==arr[k]){
                    if(arr[k]-amin>brr[k]-bmin){x+=(brr[k]-bmin)-(arr[k]-amin);}
                    x-=amin;
                    }
                else{
                    if(arr[k]-amin<brr[k]-bmin){x+=(arr[k]-amin)-(brr[k]-bmin);}
                    x-=bmin;flag=1;
                    }
                count+=x;

                if(flag==0){
                    count+=max(arr[k],brr[k])-x-bmin;
                }
                else{
                     count+=max(arr[k],brr[k])-x-amin;
                }
            }
            else if(arr[k]>amin){count+=(arr[k]-amin);}
            else if(brr[k]>bmin){count+=(brr[k]-bmin);}
        }
        cout<<count<<endl;
    }
    return 0;
}