#include<bits/stdc++.h>
using namespace std;
int Digits(unsigned long long input){
    int num=1;
    for(unsigned long long i=10;i<=input;i*=10){
        num++;
    }
    return num;
}
int AnyDigit(unsigned long long input,int idx){
    int x=pow(10,idx+1);
    return((input % x)/pow(10,idx));
}
int Round(int x){
    if(x<5){
        x=0;
    }
    else{
        x+=(10-x);
    }
    return x;
}
unsigned long long Rounding(unsigned long long input){
    unsigned long long maximum=input;
    for(int i=0;i<Digits(input);i++){
        if(Round(AnyDigit(input,i))==10){
            input+=pow(10,i+1)-(AnyDigit(input,i)*pow(10,i));
            maximum=input;
        }
        else{
            input-=AnyDigit(input,i)*pow(10,i);
        }
    }
    return maximum;
}
int main(){
    int input_size;
    cin>>input_size;
    unsigned long long input;
    for(int k=0;k<input_size;k++){
        for(int i=0;i<input_size;i++){cin>>input;}
        cout<<Rounding(input)<<endl;
    }
    return 0;
}