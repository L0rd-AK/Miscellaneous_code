#include <iostream>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int a[t][t];
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<t;j++)
            {
                if(i+j==t-1)
                {
                    a[i][j]=3;
                }
                else if(i==j)
                {
                    a[i][j]=2;
                }
                else
                {
                    a[i][j]=0;
                }
            }
        }
        for(int i=t/3;i<t-t/3;i++)
        {
            for(int j=t/3;j<t-t/3;j++)
            {
                if(i==t/2&&j==t/2)
                {
                    a[i][j]=4;
                }
                else
                {
                    a[i][j]=1;
                }
            }
        }
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<t;j++)
            {
                cout<<a[i][j];
            }cout<<endl;
        }cout<<endl;
    }




    return 0;
}