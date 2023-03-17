#include <stdio.h>
int main()
{
    int t,tx,ty,dx,dy,x,y;
    
    
    while(1)
    {
        scanf("%d",&t);
        if(t==0) break;
        scanf("%d%d",&tx,&ty);
        for(int i=0;i<t;i++)
        {
            scanf("%d%d",&dx,&dy);
            x=dx-tx;y=dy-ty;
            if(x>0&&y>0) printf("NE\n");
            else if(x<0&&y>0) printf("NO\n");
            else if(x<0&&y<0) printf("SO\n");
            else if(x>0&&y<0) printf("SE\n");
            else printf("divisa\n");
        }
        x=0,y=0,tx=0,ty=0,dx=0,dy=0;
    }

    return 0;
}