#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n=0;
    double mtx[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mtx[i][j];
            if(mtx[i][j]!=0){n=abs(i-2)+abs(j-2);}
        }
        cout<<endl;
    }
    cout<<n<<endl;
    return 0;
}