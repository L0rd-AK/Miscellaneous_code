#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
    int a;
    float x,y,z,sum=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>x>>y>>z;
        
        printf(".1%f\n",(x*2+y*3+z*5)/10.0);
    }
 
    return 0;
}