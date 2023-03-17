#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1){cout<<0<<endl;}
    else if(n==2||n==3){cout<<1<<endl;}
    else{cout<<(n-1)+(n-2);}
    
        return 0;
}