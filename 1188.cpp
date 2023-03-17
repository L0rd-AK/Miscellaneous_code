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
     for(int i=1;i<=5;i++){
        for(int j=11;j>=12-i;j--){
            sum+=a[i][j];
            //cout<<i<<","<<j<<" ";
            count++;
        }
        //cout<<endl;
    }
    cout<<endl;int k=0;
    for(int i=6;i<=10;i++){
        
        for(int j=7+k;j<=11;j++){
            sum+=a[i][j];
            //cout<<i<<","<<j<<" ";
            count++;
            
        }
        k++;
        //cout<<endl;
    }
    if(c=='S') 
    {
        printf("%.1lf\n",sum);            
    }else{
         printf("%.1lf\n",sum/count); 
    }
    return 0;
}