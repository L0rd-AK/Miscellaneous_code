#include <iostream>
using namespace std;

int main()
{
    int a,b,i, count=1;
    cin>>a>>b;
    for(int i=0;;i++)
    {
        a=a*3;
        b=b*2;
        if(a<b||a==b)
        {
            count++;
        }
        if(a>b)
        {
           break;
        }

    }
     cout<<count<<endl;
}