#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100];
    int j=0;
    while(gets(s)!=NULL){
            j=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]!=' '){
                j++;
                if(s[i]>='a'&&s[i]<='z'){
                    if(j%2!=0){
                         s[i]=toupper(s[i]);
                    }
               
                }
                else if(s[i]>='A'&&s[i]<='Z'){
                    if(j%2==0){
                       s[i]=tolower(s[i]); 
                    }
                    
                }
            }
        }
    
        printf("%s\n", s);

    }

    return 0;
}
