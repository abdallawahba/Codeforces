#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[100]={0};
    int count=s.size()/2;
    for(int i=0;i<s.size();i++){
        arr[i]=s[2*i]-'0';
    }
    sort(arr,arr+count+1);
    for(int i=0;i<s.size();i++){
        if(!(i%2)){s[i]=arr[i/2]+'0';}
        else{s[i]='+';}
        cout<<s[i];
    }
    return 0;
}