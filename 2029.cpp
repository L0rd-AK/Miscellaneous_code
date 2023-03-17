#include <iostream>
using namespace std;
int main()
{
    float v,d;
    while(scanf("%f%f",&v,&d)!=EOF)
    {
        double h,area,r=d/2;
        area=3.14*(r*r);
        h=v/area;
        
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,area);
    }
    return 0;
}