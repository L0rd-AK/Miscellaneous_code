#include <iostream>
using namespace std;
int main()
{
    int a,b,c, i,new_sum=0,sum=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
        { 
            sum+=i;
        }
        new_sum=(sum*a)-b;
      
        if(new_sum<0)
          {
               cout<<0<<endl;
          }
          else
            {
                cout<<new_sum<<endl;
            }
}