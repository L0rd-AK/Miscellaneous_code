#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
   int x,y,sum=0,Max=0,Min=0;
   cin>>x>>y;
   Max=max(x,y);
   Min=min(x,y);
   //cout<<Max<<" "<<Min<<endl;
   for(int i=Min+1;i<Max;i++){
       if(i%2!=0){
        sum+=i;
       }
   }
   cout<<sum<<endl;
 
    return 0;
}