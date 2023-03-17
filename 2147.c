#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[10001];
        scanf("%s",s);
        int size=strlen(s);
        double ans=(size*0.01);
        printf("%.2lf\n",ans);
    }




    return 0;
}