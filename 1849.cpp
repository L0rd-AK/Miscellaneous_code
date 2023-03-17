#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
   
        cin>>a>>b>>x>>y;
        sum1=min(a,b);sum2=min(x,y);
        sum3=sum1+sum2;
        sum4=min(max(a,b),max(x,y));
        sum5=min(sum3,sum4);
        cout<<sum5*sum5<<endl;
    return 0;
}