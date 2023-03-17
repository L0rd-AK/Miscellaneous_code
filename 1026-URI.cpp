#include <iostream> 
using namespace std; 

int main(){ 
 unsigned long int a, b, sum=0; 

 while(cin >> a >> b) { 
      sum = a ^ b; 
     cout << sum << endl; 
 } 

 return 0; 
}