#include <iostream>
using namespace std;
int main()
{
    int n,b,a, count=0;
    cin>>n>>b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<b||a==b)
        {
            count++;
        }
        else
        {
            count+=2;
        }

    }
    cout<<count<<endl;
    return 0;
}