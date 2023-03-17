#include <iostream>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        int max_f=0,max_f_c=0;
        cin>>n>>m>>k;int a[m];
        for(int i=0;i<m;i++) cin>>a[i];
        
        if(n%k==0)
        {
            max_f=n/k;
            max_f_c=k;
        }
        else
        {
            max_f=(n/k)+1;
            max_f_c=n%k;
        }
        
        for(int i=0;i<m;i++)
        {
            if(a[i]>max_f)
            {
                max_f_c=-1;
                break;
            }
            else if(a[i]==max_f) max_f_c--;
        }
        if(max_f_c>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
// 37084 5 5
// 7417 7417 7417 7417 7416