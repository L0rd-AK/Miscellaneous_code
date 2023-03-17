#include <iostream>
using namespace std;
int main()
{
    double ans=0,n,a[12][12];char c;
    cin>>n>>c;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<12;i++){
        for(int j=n;j<=n;j++){
            ans+=a[i][j];
        }
    }
    if(c=='S'){
        printf("%.1f",ans);
    }else{
        printf("%.1f",ans/12.0);
    }

    return 0;
}