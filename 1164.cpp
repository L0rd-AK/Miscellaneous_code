#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;int sum=0;
        for(int j=1;j<=n/2;j++)
        {
            if(n%j==0)sum+=j;
        }
        if(sum==n) cout<<n<<" eh perfeito"<<endl;
        else cout<<n<<" nao eh perfeito"<<endl;
    }
    

}