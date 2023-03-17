#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   int a,b,c,ans;
   while(1)
   {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0) break;
        ans=(a*b*c);
        printf("%i\n",(int)cbrt(ans));
   }
 
    return 0;
}