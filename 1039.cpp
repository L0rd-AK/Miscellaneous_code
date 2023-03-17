#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1,x1,y1,r2,x2,y2;
    float distance;
    while(scanf("%d%d%d%d%d%d",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF){
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        if(r1>=distance){
            cout<<"RICO"<<endl;
        }else{
            cout<<"MORTO"<<endl;
        }
    }
    return 0;
}