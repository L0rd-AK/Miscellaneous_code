#include <stdio.h>
int main()
{
    char c[1];
    int n;
    printf("Choose Operation: +, -, *, /\n");
    scanf("%c",&c[0]);
    if(c[0]=='*'||c[0]=='+')
    {
        printf("Enter How many number you wanna add: \n");
        scanf("%d",&n);
        printf("Enter %d Numbers: \n",n);
        float a[n],sum=0,multiply=1;
        for(int i=0;i<n;i++)
        {
            scanf("%f",&a[i]);
            sum+=a[i];
            multiply*=a[i];
        }
        if(c[0]=='*')
        {
            printf("Multiplication = %.2f\n",multiply);
        }
        else
        {
            printf("Sum = %.2f\n",sum);
        }
    }
    else if(c[0]=='-'||c[0]=='/')
    {
        float x,y;
        printf("Enter two numbers: \n");
        scanf("%f%f",&x,&y);
        if(c[0]=='-') printf("Substract = %.2f\n",x-y);
        else printf("Divition = %.2f\n",x/y);

    }
    else
    {
        printf("Invalide Operator. Chose between(+,-,*,/)\n");
    }
    


}