#include <iostream>
 
using namespace std;
 
int main() {
    
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        int sum=(a+b+c+d)-3;
        cout<<sum<<endl;
    }
 
    return 0;
}