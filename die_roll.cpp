#include <iostream>
using namespace std;
int main()
{
    int a,b,c, min,max;
    double ans;
    cin>>a>>b;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    c=(6-max)+1;
    
    if(c==3)
    {
        cout<<"1/2"<<endl;
    }
        else if (c==6)
        {
          cout<<"1/1"<<endl;
        }
             else if(c==5)
                {
                     cout<<"5/6"<<endl;
                }
                     else if(c==2)
                        {
                             cout<<"1/3"<<endl;
                        }
                            else if(c==4)
                                {
                                     cout<<"2/3"<<endl;
                                }
                                    else
                                        {
                                            cout<<"1/6"<<endl;
                                        }
 
    
    return 0;
}