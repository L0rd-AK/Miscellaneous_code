#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    while(scanf("%d",&t)!=EOF){
        float a[t],min=12;
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        cout<<min<<endl;
        
    }
}