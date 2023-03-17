#include <iostream>
#include <stdio.h>
int main()
{
    int x,y,z;
    while(1)
    {
        
        scanf("%d%d",&x,&y);
        if(x==0&&y==0) break;
        z=y-x;
        int c=0,a[]={2,5,10,20,50,100};
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(i!=j)
                {
                    if(a[i]+a[j]==z)
                    {
                        printf("possible\n");
                        c++;
                        break;
                    }
                    
                }
            }
            if(c>0) break;
        }
        if(c==0)
        {
            printf("impossible\n");
        }
    }

    return 0;
}