#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,c,r1,r2;
    
    while(1){
        cin>>l>>c>>r1>>r2;
        if(l==0&&c==0&&r1==0&&r2==0){
            break;
        }
        float distance,corno;
            distance=r1*2+r2*2;
            corno = sqrt(pow(l,2)+pow(c,2));

            if(corno>=distance){
                cout<<"S"<<endl;
                distance=0;
                corno=0;
            }else{
                cout<<"N"<<endl;
                distance=0;
                corno=0;
            }
    }

    return 0;
}