#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x=0,c1=0,c2=0;
    cin>>x;
    char arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]=='R') c1++;
        else c2++;
    }
    cout<<abs(c1)+abs(c2)+1<<endl;
    return 0;
}