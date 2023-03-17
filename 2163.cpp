#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans1=0,ans2=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==42 )
            {
                if(i==0 || i==r-1 || j==0 || j==c-1)
                {
                    continue;
                }   
                else
                {
                
                    //if(a[i-1][j]==7 && a[i+1][j]==7 && a[i][j-1]==7 && a[i][j+1]==7 && a[i-1][j+1]==7 && a[i+1][j-1]==7 && a[i-1][j-1]==7 && a[i+1][j+1]==7)
                    if(a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7&&a[i][j-1]==7&&a[i][j+1]==7&&a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7)
                    {
                        ans1=i+1;
                        ans2=j+2;
                    }
                }
            }
            
        }

    }
    printf("%d %d\n",ans1,ans2);

    return 0;
}