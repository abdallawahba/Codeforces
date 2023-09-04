#include<bits/stdc++.h>
using namespace std;
int main(){
    long long input;
    cin>>input;
    long long max=input;
    for(long long i=1;i<=input;i*=10){
        if(input%(i*10) >= 5*i){
            input-=input%(i*10);
            input+=(i*10);
            if(input>max){max=input;}
        }
        else{
            input-=input%(i*10);
        }
    }
    cout<<max<<endl;
    return 0;
}