#include <iostream>
#include <stdio.h>
int main()
{
    int n;
    int fats[] = {1, 2, 6, 24, 120, 720, 5040, 40320};

    scanf("%d", &n);

    int ans = 0;
    for (int i = 7; i >= 0; --i)
    {
        ans += n / fats[i];
        n %= fats[i];
    }
        

    printf("%u\n", ans);

    return 0;
    




    return 0;
}