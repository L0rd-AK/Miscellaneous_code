#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    while(1){
        cin>>a>>b;
        if(a>0&&b>0){
            for(int i=min(a,b);i<=max(a,b);i++){
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum="<<sum<<endl;
            sum=0;
        }
        
        else{
            break;
        }
    }

    return 0;
}