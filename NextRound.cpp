#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int r=0;
    int x=0,y=0;
    cin>>x>>y;
    int f[x]={0};
    for(int i=0;i<x;i++){
        cin>>f[i];
    }
    for(int i=0;i<x;i++){
        if(f[i]>=f[y-1]){
                if(f[i]==0&&f[y-1]==0){r--;}
                r++;}
    }
    cout<<r<<endl;
    return 0;
}