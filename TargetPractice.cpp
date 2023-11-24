#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int o=0;cin>>o;
    for(int l=0;l<o;l++){
        char arr[10][10];for(int i=0;i<10;i++){for(int j=0;j<10;j++){cin>>arr[i][j];}}
        int idx,ii,jj;
        int s=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                ii=i;jj=j;
                if(arr[i][j]=='X'){
                    if((i==4&&j==5)||(i==4&&j==4)||(i==5&&j==5)||(i==5&&j==4)){s+=5;}
                    else{
                        if(i>4){ii=9-i;}if(j>4){jj=9-j;}
                        idx=min(ii,jj)+1;
                        s+=idx;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}