#include <stdio.h>
#include <math.h>

int main() {
 
   double a,b,c,x,y,eq;
   scanf("%lf%lf%lf",&a,&b,&c);
   eq=(b*b)-4*a*c;
   if(a==0||eq<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x=(-b+sqrt(eq))/(2*a);
        y=(-b-sqrt(eq))/(2*a);
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);
    }
    return 0;
}