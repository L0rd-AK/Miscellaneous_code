#include <iostream>
 
using namespace std;
 
int main() {

double a,b,c,min=0,max=0,mid=0;
cin>>a>>b>>c;
if(a>b&&a>c)
  max=a;
else if(b>a&&b>c)
  max=b;
else
  max=c;

if(a>c&&b>c)
  min=c;
else if(b>a&&c>a)
  min=a;
else
  min=b;

if(max==a&&min==b)
  mid=c;
else if(max==b&&min==c)
  mid=a;
else
  mid=b;

//cout<<max<<" "<<min<<endl;

if(max>=(mid+min)){
 cout<<"NAO FORMA TRIANGULO"<<endl;
}
else{
    if((max*max)==(mid*mid)+(min*min))
        cout<<"TRIANGULO RETANGULO"<<endl;
    if((max*max)>(mid*mid)+(min*min))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if((max*max)<(mid*mid)+(min*min))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(max==mid&&mid==min&&min==max)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    if((max==mid&&max!=min)||(mid==min&&mid!=max)||(min==max&&min!=mid))
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }



 
 return 0;
}