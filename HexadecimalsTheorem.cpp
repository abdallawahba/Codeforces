#include<bits/stdc++.h>
using namespace std;
const double gt=1.618033988749894;

int main(){
    int input;
    cin>>input;
    if(input==1){cout<<1<<" "<<0<<" "<<0<<" "<<endl;}
    else if(input==2){cout<<1<<" "<<1<<" "<<0<<" "<<endl;}
    else if(input==3){cout<<1<<" "<<1<<" "<<1<<" "<<endl;}
    else{
        int first_number,second_number,third_number,middle_number;
        first_number=round(input*(gt-1));
        middle_number=round(first_number*(gt-1));
        second_number=round(middle_number*(gt-1));
        third_number=round(second_number*(gt-1));
        cout<<first_number<<" "<<second_number<<" "<<third_number;
    }
    return 0;
}