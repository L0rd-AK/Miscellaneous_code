#include <iostream>
#include <stdio.h>
int main()
{
    int t,a1,a2,a3,a4,a5,a6;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a1);
        scanf("%d%d%d%d",&a2,&a3,&a4,&a5);
        scanf("%d",&a6);
        if(a1!=a2&&a2!=a3&&a3!=a4&&a4!=a5&&a5!=a6&&a1>=1&&a1<=6&&a2>=1&&a2<=6&&a3>=1&&a3<=6&&a4>=1&&a4<=6&&a5>=1&&a5<=6&&a6>=1&&a6<=6)
        {
            if(a1+a6==7&&a2+a4==7&&a3+a5==7) printf("SIM\n");
            else printf("NAO\n");
        }
        else printf("NAO\n");
        
    }
    return 0;
}