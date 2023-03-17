#include <iostream>
using namespace std;
int palindrom(string s,int n)
{
    int i=0,j=n-1;
    if(s[i]==s[j]&&i!=j)
    {
        i++;j--;
        return palindrom(s,n);
    }
    else if(i==j)
    {
        return 1;
    }
  
    return 0;
}
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    int sum=1001;
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<=l;j++)
        {
            if(palindrom(s,l)==0)
            {
                continue;
            }
            else if(palindrom(s,l)==1)
            {
    
                if(sum>j-i)
                {
                    sum=(j-i);
                }
            }
        }
    }
    cout<<sum<<endl;
}
