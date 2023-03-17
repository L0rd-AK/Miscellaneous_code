#include <iostream>
using namespace std;
int main()
{
    double sum=0,count=0,a[12][12];char c;
    cin>>c;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=1+i;j<11-i;j++){
            sum+=a[i][j];
            //cout<<i<<","<<j<<" ";
            count++;
        }
    }
    if(c=='S')
    {
        printf("%.1lf",sum);            
    }else{
         printf("%.1lf",sum/count); 
    }
    return 0;
}