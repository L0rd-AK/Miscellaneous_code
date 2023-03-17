#include <iostream>
#include <stdio.h>
int main()
{
    float t,n,a[2];
    
    while(1)
    {
        int i=0;
         while(1)
        {
            scanf("%f",&n);
            if(n>=0&&n<=10)
            {
                a[i]=n;i++;
                if(i==2)
                {
                    printf("media = %.2f\n",(a[0]+a[1])/2);
                    break;
                    
                }   
            }
            else printf("nota invalida\n");
        }
                    int z;
                        while(1)
                        {
                            scanf("%d",&z);
                            printf("novo calculo (1-sim 2-nao)\n");
                            if(z==1||z==2) break;
                        }
                            if(z==1) continue;
                            else if(z==2) break;
      
    }
    return 0;
   
}