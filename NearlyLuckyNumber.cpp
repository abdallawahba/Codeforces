#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long input;
    cin>>input;
    int checker=0;
    int count=0;
    for(unsigned long long i=1;i<=input;i*=10){
        checker=input%(i*10)/i;
        if(checker==4||checker==7){count++;}
    }
    for(unsigned long long i=1;i<=count;i*=10){
        checker=count%(i*10)/i;
        if(checker!=4 && checker!=7){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(count==0){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}
    return 0;
}