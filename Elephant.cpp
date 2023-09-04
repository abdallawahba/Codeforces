#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x=0,steps=0;
    cin>>x;
    do{
       if(x==0){
        cout<<steps<<endl;
        return 0;
       }
       else{
       if(x>=5){x-=5; steps++;}
       else if(x>=4){x-=4; steps++;}
       else if(x>=3){x-=3; steps++;}
       else if(x>=2){x-=2; steps++;}
       else{x-=1; steps++;}
       }
    }while(x!=0);
    cout<<steps<<endl;
    return 0;
}