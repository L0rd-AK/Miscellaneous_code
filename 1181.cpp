#include <iostream>
using namespace std;
int main()
{
    int a[12][12];
    int t;
    char c;
    cin>>t;
    cin>>c;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>a[i][j];
        }
    }
    double sum=0,avg=0;
    for(int i=0;i<12;i++){
        sum+=a[t][i];
    }
    avg=sum/12;
    if(c=='S'){
        printf("%.1lf\n",sum);
    }else{
        printf("%.1lf\n",avg);
    }
    return 0; 
}