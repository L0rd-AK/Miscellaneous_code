#include <iostream>
using namespace std;
int main()
{
    long int t,n;
    while(scanf("%d",&t)!=EOF)
    {
        int sum=0;
        cin>>n;
        
        if(n%3==0)
        {
            for(int i=0;n>0;i++)
            {
                sum+=n%10;
                n=n/10;
            }
            cout<<sum<<" sim"<<endl;
        }
        else
        {
            for(int i=0;n>0;i++)
            {
                sum+=n%10;
                n=n/10;
            }
            cout<<sum<<" nao"<<endl;
        }
    }
}