#include <iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;char c;
    for(int i=0;i<n;i++) s+=('A'+i);
    // for(int i=0;i<n;i++)
    // {
        for(int j=0;j<n;j++)
        {
            cout<<"? "<<s[j]<<" "<<s[j+1]<<endl;
            fflush(stdout);
            cin>>c;
            if(c=='>') swap(s[j],s[j+1]);
        }
    //}    
    cout<<"! "<<s<<endl;
    fflush(stdout);

    return 0;
}