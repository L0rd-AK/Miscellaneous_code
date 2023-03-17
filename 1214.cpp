#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double count=0;
        cin>>n;
        double a[n];double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        sum=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>sum) count++;
        }
        double ans=(count/n)*100;
        printf("%.3lf%%\n",ans);
        count=0,sum=0;

    }
    return 0;
}