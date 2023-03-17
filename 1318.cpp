#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0){
            break;
        }
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        for(int i=0;i<m;i++){
            if(a[i]==a[i+1]&&a[i+1]!=a[i+2]){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }


    return 0;
}