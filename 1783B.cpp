#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,up,down,sr,sc,er,ec;
        cin>>n;int a[n][n];
        up=1;down=n*n;sr=0,sc=0,er=n-1,ec=n-1;
        int x;
        if(n%2==0) x=n/2;
        else x=(n/2)+1;
        while(x--)
        {
            for(int i=sc;i<=ec;i++)
            {
                if(i%2==0)
                {
                    a[sr][i]=down;
                    down--;
                }
                else
                {
                    a[sr][i]=up;
                    up++;
                }
            }
            for(int i=sr+1;i<=er;i++)
            {
                if(i%2==0)
                {
                    a[i][ec]=up;
                    up++;
                }
                else
                {
                    a[i][ec]=down;
                    down--;
                }
            }
            for(int i=ec-1;i>=sc;i--)
            {
                if(i%2==0)
                {
                    a[er][i]=up;
                    up++;
                }
                else
                {
                    a[er][i]=down;
                    down--;
                }
            }
            for(int i=er-1;i>=sr+1;i--)
            {
                if(i%2==0)
                {
                    a[i][sc]=down;
                    down--;
                }
                else
                {
                    a[i][sc]=up;
                    up++;
                }
            }
            sr++,er--,sc++,ec--;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}