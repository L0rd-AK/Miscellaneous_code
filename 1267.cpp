#include <iostream>
#include <stdio.h>
int main()
{
    int r,c;
    while(1)
    {
        scanf("%d%d", &c,&r);
        if(r==0&&c==0) break;
        int a[r][c];
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int ans=0,count;
        for(int i=0;i<c;i++)
        {
            count=0;
            for(int j=0;j<r;j++)
            {
                if(a[j][i]==1)
                {
                    count++;
                }
            }
            if(count==r){printf("yes\n"); break;} 
        }
        if(count!=r) printf("no\n");
    }
    return 0;
}