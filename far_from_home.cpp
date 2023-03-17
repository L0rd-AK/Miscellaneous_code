#include <iostream>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    long long int a[t];
    for(long long int i=0;i<t;i++)
        cin>>a[i];

        cin>>n;
        long long int ans=0,x=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>x;int c=0,ans=0;
        for(int j=0;j<t-2;j++)
        {
            if(a[j]<a[j+1])
            {
                
                if((a[j+1]-a[j])>x)
                {
                    cout<<"No way Home"<<endl;c++;
                    break;
                }
                else x=x-(a[j+1]-a[j]);
            }
            else
            {
                // if((a[j]-a[j+1])>x)
                // {
                //     cout<<"No way Home"<<endl;c++;
                //     break;
                // }
                // else
                // {
                    x=x+(a[j]-a[j+1]);
                //}
            } 
        }
        if(c==0)
        {
            if(a[t-1]>a[t-2])
            {
                if((a[t-1]-a[t-2])<=x) cout<<"Homecoming"<<endl;
                else cout<<"No way Home"<<endl;
            } 
            else
            {
                if((a[t-2]-a[t-1])<=x) cout<<"Homecoming"<<endl;
                else cout<<"No way Home"<<endl;
            }
        }
    }

}