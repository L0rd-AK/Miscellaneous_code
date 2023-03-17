#include <stdio.h>

int main() {

   long long int A,B,size,a;
int i,j=0;
int one=0, two=0, zero=0, three=0, four=0, five=0 , six=0, seven=0, eight=0, nine=0;
    while(1)
    {
        one=0, two=0, zero=0, three=0, four=0, five=0 , six=0, seven=0, eight=0, nine=0,i,j=0;
        scanf("%lld %lld", &A, &B);
       if (A == 0 && B==0) break;

            while (A!=B+1) {
                i=A;
                while (i!=0) {
                    a = i % 10;
                    if (a == 1)  one++; 
                    else if (a == 2)  two++; 
                    else if (a == 3)  three++; 
                    else if (a == 4)  four++; 
                    else if (a == 5)  five++; 
                    else if (a == 6)  six++; 
                    else if (a == 7)  seven++; 
                    else if (a == 8)  eight++; 
                    else if (a == 9)  nine++; 
                    else if (a == 0)  zero++; 
                    i = i / 10;
                    // if (i == 0)  break; 
                }
                A++;
            }
            printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    }
    return 0;
}