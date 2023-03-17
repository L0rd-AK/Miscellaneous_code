#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
   float a,x;
   cin>>a;
   if(a>=0.00&&a<=2000.00){
       cout<<"Isento"<<endl;
   }
   else if(a>=2000.01&&a<=3000.00){
       x=a-2000.00;
       printf("R$ %.2f",(x*8)/100);
   }
   else if(a>=3000.01&&a<=4500.00){
       x=a-3000.00;
       printf("R$ %.2f",((x*18)/100)+80);
   }
   else if(a>4500.00){
       x=a-4500.00;
       printf("R$ %.2f",((x*28)/100)+350);
   }
 
    return 0;
}