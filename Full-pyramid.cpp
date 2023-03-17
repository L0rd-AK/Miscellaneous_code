#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++)
     {
         for(int j=0;j<a*2;j++)
          {
              if(j>=a-(i-1)&&j<=a+(i-1)){
                  cout<<"*";
              }else{
                  cout<<" ";
              }
              
          }
          cout<<" "<<endl;
     }
     return 0;
}