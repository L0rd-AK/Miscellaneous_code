#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,Max=0,Min=0;
   cin>>x>>y;
   Max=max(x,y);
   Min=min(x,y);
   for(int i=Min+1;i<Max;i++){
       if(i%5==2||i%5==3){
           cout<<i<<endl;
       }
   }
 
    return 0;
}