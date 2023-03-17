#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        
        long long int a[t],count=0;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
        sort(a,a+t);
        count=0;
        for(int i=0;i<t-1;i++)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
        {
            count+=(a[i+1]-a[i])-1;
                
        }
        cout<<count<<endl;
        count=0;
    return 0;
}