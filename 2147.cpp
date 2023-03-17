#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        double ans=(s.length()*0.01);
        printf("%.2lf\n",ans);
    }
    return 0;
}