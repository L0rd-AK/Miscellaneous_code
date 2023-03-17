#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
int main()
{
    long int t, sum, num, i;
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%d", &num);
        sum=0;
        for(i=0; i<num; i++)
            sum += pow(2, i);
            
        printf("%ld\n", sum);
    }
    return 0;
}