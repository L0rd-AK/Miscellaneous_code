#include <iostream>
using namespace std;
int main()
{
    int n, a, b, count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a+1<b)
        {
            count++;
        }
    }
    cout<<count<<endl;
}