#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0){printf("Nada\n");continue;} 
        else if(t==1) {printf("Nada\n");continue;}
        else if(t==2) {printf("Super\n");continue;}
        else 
        {
            int c=0;
            for(int i=2;i<=t/2;i++)
            {
                if(t%i==0) c++;
                if(c==2) break;
            }
            if(c>=1)
                {
                    printf("Nada\n");
                }
                else
                {
                    int temp,c1=0,digt=0;
                    while(t!=0)
                    {
                        temp=t%10;
                        if(temp==2||temp==3||temp==5||temp==7) c1++;
                        t=t/10;digt++;
                    }
                    if(c1==digt) printf("Super\n");
                    else printf("Primo\n");
                } 
            
        }
    }
}