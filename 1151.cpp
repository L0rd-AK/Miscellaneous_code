#include<iostream>
using namespace std;
int main()
{
    long int N,i,t1=0,t2=1,nt=0;

    cin>>N;

    if(N==1) cout<<t1<<" "<<t2;
    else cout<<t1<<" "<<t2;

    for(i=3; i<=N; i++)
    {
        nt=t1+t2;
        cout<<" "<<nt;
        t1=t2;
        t2=nt;  
    }
    cout<<endl;

    return 0;
}