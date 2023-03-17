#include <iostream>
using namespace std;
int main()
{
    double ans=0,count=0,a[12][12];char c;
    cin>>c;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>a[i][j];
        }
    }
    for(int i=11,k=1;i>=1;i--){
        for(int j=k;j<=11;j++){
            //cout<<i<<","<<j<<" ";
             ans+=a[i][j];
             count++;
         }
         k++;
        //cout<<endl;
    }
    if(c=='S'){
        printf("%.1lf\n",ans);
    }else{
        printf("%.1lf\n",ans/count);
    }

    return 0;
}