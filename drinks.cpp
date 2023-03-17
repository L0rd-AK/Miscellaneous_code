#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     float n, a;
     double sum=0.0000;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         sum+=a;
     }
     cout<<fixed<<setprecision(12)<<sum/n<<endl;
 }