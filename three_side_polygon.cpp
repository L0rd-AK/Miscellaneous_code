#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=(n/3);
    if(n%3==0) cout<<"Equilateral"<<endl;
    else if(n-(x*2)>x) cout<<"Isosceles"<<endl;
    else cout<<"Invalide"<<endl;
   

    return 0;
}