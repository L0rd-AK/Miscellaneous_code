#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,maxx,minn;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        maxx=max(x,y);minn=min(x,y);
        for(int j=maxx;;j++)
        {
            
            if(j%x==0&&j%y==0)
            {
                cout<<"Case "<<i<<": "<<j<<endl;
                break;
            }
        }
    }
    return 0;
}