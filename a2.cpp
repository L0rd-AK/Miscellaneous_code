#include <iostream>
using namespace std;

int main(){


long  a,b,r1,r2,c;

cin>> a>>b>>c;

if(a<=10000000&&a>=1&&b>=1&&c>=1&&b<=a&&c<=a){

if(a%b==0&&a%c==0){

r1=a/b;

r2=r1*c;

if(a<r2){

cout<< a<< " " <<r2;

}

if(r2<a){

cout<< r2<< " " <<a;

}


        }
}
}