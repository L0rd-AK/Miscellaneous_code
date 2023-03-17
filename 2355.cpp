#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    
    while (1)
    {
        long int ans,ans1;
        double avg;
        cin>>t;
        if(t==0) break;
        avg=t/90.0;
        ans=floor(avg*1);
        ans1=ceil(avg*7);
        cout<<"Brasil "<<ans<<" x Alemanha "<<ans1<<endl;
    }
    
}