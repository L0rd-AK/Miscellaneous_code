#include <iostream>
using namespace std;
int main()
{
    int n,a,b,x,y,z;
    cin>>n>>a>>b;

    x=a,y=b,z=n;
    if(n==1)
    {
        if(a==b) cout<<1<<endl;
        else cout<<0<<endl;
        cout<<a<<":"<<b<<endl;
    }
    else if(a+b<n)
    {
        cout<<n-(a+b)<<endl;
        while(a--)
        {
            cout<<"1:0"<<endl;
        }
        while(b--)
        {
            cout<<"0:1"<<endl;
        }
        z=z-(x+y);
        while(z--)
        {
            cout<<"0:0"<<endl;
        }
    }
    else if(a+b>=n and x==0 or y==0)
    {
        cout<<0<<endl;
        
        if(x==0)
        {
            n=n-1;
            int i=0;
            while(n--)
            {
                cout<<"0:1"<<endl;i++;
            }
            cout<<"0:"<<b-i<<endl;
        }
        else if(y==0)
        {
            n=n-1;
            int i=0;
            while(n--)
            {
                cout<<"1:0"<<endl;i++;
            }
            cout<<a-i<<":0"<<endl;
        }
    }
    else 
    {
        cout<<"0"<<endl;
        cout<<"1:0"<<endl;
        // cout<<"0:1"<<endl;
        
            n=n-2;int i=0;
            while(n--)
            {
                cout<<"0:1"<<endl;i++;
            }
            cout<<a-1<<":"<<b-i<<endl;
    }    
   
       
}