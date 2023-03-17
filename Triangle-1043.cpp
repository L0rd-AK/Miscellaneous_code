#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double max=0,sum=0;
    float a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
      max=a;
    else if(b>a)
      max=b;
    else
      max=c;
    if(max==a)
      sum=b+c;
    else if(max==b)
      sum=c+a;
    else
      sum=a+b;
    if(sum>max){
        printf("Perimetro = %.1f", a+b+c);
    }else{
        printf("Area = %.1f", ((a+b)/2)*c);
    }

    return 0;
}