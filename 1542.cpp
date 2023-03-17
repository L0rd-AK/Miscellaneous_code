#include <iostream>
#include <stdio.h>
int main()
{
    int x,y,z;
    while(scanf("%d",&x))
    {
        int ans;
        if(x==0) break;
        else scanf("%d%d",&y,&z);

        ans=(y*z*x)/(z-x);
        if(ans>1) printf("%d paginas\n",ans);
        else printf("%d pagina\n",ans);
    }
    return 0;
