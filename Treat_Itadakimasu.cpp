#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,m=0;
    cin>>a>>b>>c>>d;

    m=a*b*c*d;
    m=m%100;

    if(m>=0&&m<=24)
     {
         cout<<"level 0"<<endl;
     }
     if(m>=25&&m<=49)
     {
         cout<<"level 1"<<endl;
     }
     if(m>=50&&m<=74)
     {
         cout<<"level 2"<<endl;
     }
     if(m>=75&&m<=99)
     {
         cout<<"level 3"<<endl;
     }
     return 0;
}