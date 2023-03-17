#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==b&&b!=c)
        {
            cout<<'C'<<endl;
        }
        else if(b==c&&c!=a)
        {
            cout<<'A'<<endl;
        }
        else if(a==c&&c!=b)
        {
            cout<<'B'<<endl;
        }
        else
        {
            cout<<'*'<<endl;
        }
    }

}