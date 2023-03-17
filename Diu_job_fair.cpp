#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int d,l,r,count;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r>>d;
        count=0;
        for(long long int j=l;j<=r;j++)
        {
            if(j%10==d)
            {
                count++;
                //j+=10
                r=r-j;
                r=r/10;
                break;
            }
            
        }
        cout<<count+r<<endl;
    }
    

    return 0;

}