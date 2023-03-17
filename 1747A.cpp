#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;long long int x,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        cout<<abs(sum)<<endl;
    }
}