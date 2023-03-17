#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,count=0;
    double a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        x=x+a*c;y=y+b*d;
        while(1){
        if(x<y){
            count++;
            x=x+c;y=y*d;
        }
        else if(count>100){
            cout<<"Mais de 1 seculo."<<endl;
            break;
        }
        else{
            break;
        }
      }
        
    }

     cout<<count<<" anos."<<endl;
    return 0;
}