#include <iostream>
using namespace std;
int t,n,ans1,ans2,var1,var2,count=0;
void recursiveCalls(int x)
{
 
    if(x==1)
    {
        ans1++;
    }
    else if(x==0)
    {

    }
    else
    {
        count++;
        recursiveCalls(x-1);
        recursiveCalls(x-2); 
    } 
    printf("fib(%d) = %d calls = %d\n",n,count,ans1);
}




int main()
{
    cin>>t;cin.ignore();
    while(t--)
    {
        cin>>n;
       recursiveCalls(n);
       
        
    }
}