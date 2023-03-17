#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[10];
    for(int i=0;i<11;i++){
        cout<<"N["<<i<<"] = "<<t<<endl;
        t*=2;
    }


    return 0;
}