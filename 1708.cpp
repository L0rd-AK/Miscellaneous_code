#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    x=abs(x-y);
    cout<<ceil(y/x)<<endl;
    return 0;
}