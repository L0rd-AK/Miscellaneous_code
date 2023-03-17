#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i,j,t,n,digit,c,count,nine,ans;
    
    cin>>t;
    while(t--)
    {
        cin>>n;c=0;
        if(n<=10)
        {
            cout<<n<<endl;
            continue;
        }
        else if(n>10&&n<=100)
        {
            if(n==100) {cout<<19<<endl; continue;}
            while(n!=0)
            {
                digit=n%10;
                count++;
                n=n/10;
            }
            cout<<(digit-1)+10<<endl;
        }
        else
        {
            i=0,
            ans=0,nine=100,j=1;
            while(i<=n)
            {
                ans++;
                i=nine*j;
                if(j==10)
                {
                    j=1;
                    nine=i;
                }
                j++;
            }
            cout<<ans+19-2<<endl;
        }
        
       

    }
}