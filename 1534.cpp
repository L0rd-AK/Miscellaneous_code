#include <iostream>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<t;j++)
            {
                if(i+j==t-1)
                {
                    cout<<2;
                }
                else if(i==j)
                {
                    cout<<1;
                }
                else
                {
                    cout<<3;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}