#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
    int a[28]={ '#','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char c;
    //cin>>c;
    scanf("%c",&c);
    for(int i=0;i<28;i++){
        if(c==a[i]){
            //cout<<i<<endl;
            printf("%d\n",i);
        }
    }


    return 0;
}