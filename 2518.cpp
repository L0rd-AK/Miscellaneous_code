#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,c,l;
    while (scanf("%d%d%d%d",&n,&h,&c,&l)!=EOF)
    {
        double otivuj;
        otivuj=sqrt(pow(h,2)+pow(c,2));
        otivuj=otivuj*n;
        otivuj=otivuj*l;
        printf("%.4f\n",otivuj/10000.0);
    }
    
}