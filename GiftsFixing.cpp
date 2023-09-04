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
        for(Int k=0;k<numofgft;k++){
            int x=0;
            if(arr[k]>amin && brr[k]>bmin){
                x=min((arr[k]-amin),(brr[k]-bmin));
                count+=x;
                if(x==(brr[k]-bmin)){
                    count+=max((arr[k]-amin),(brr[k]-bmin))-x;
                }
                else if(x==(arr[k]-amin)){
                    count+=max((arr[k]-amin),(brr[k]-bmin))-x;
                }
            }
            else if(arr[k]>amin){count+=(arr[k]-amin);}
            else if(brr[k]>bmin){count+=(brr[k]-bmin);}
        }
        cout<<count<<endl;
    }
    return 0;
}