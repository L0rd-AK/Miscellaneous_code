#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float sum=0,sum1=0;
    cin>>a>>b>>c;

    sum=(-b+sqrt(b*b-4*a*c))/(2*a);
    sum1=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<sum<<" "<<sum1<<endl;
    if(sum!=0&&sum1!=0){
        cout<<'Y'<<endl;
    }
    else{
        cout<<'N'<<endl;
    }

    return 0;
}