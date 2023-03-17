#include <iostream>
#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);

    long long int a[t],n[t];
    for(int i=0;i<t;i++)
    {
        scanf("%lld", &a[i]);
        n[i]=a[i];
    } 

    int i=0;
    while(1)
    {
            if(i<t)
            {
                 if(a[i]%2!=0)
                {
                    
                    if(a[i]==a[t-1]){a[i]=a[i]-1;break;} 
                    a[i]=a[i]-1;
                    i++;
                    continue;
                }
                else if(a[i]%2==0)
                {
                    if(a[i]==a[0]){a[i]=a[i]-1;break;}
                    a[i]=a[i]-1;
                    i--;
                    continue;
                }
            }
       
        
    }

    long long int sum=0,c=0;
    for(int j=0;j<t;j++)
    {
        if(a[j]>0) sum+=a[j];
        if(a[j]!=n[j]) c++;
    } 
    printf("%lld %lld\n",c,sum);



    return 0;
}