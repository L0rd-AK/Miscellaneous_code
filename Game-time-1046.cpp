#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,start=0,end=0,startMin=0,endMin=0;
    while(1){
	cin>>a>>b>>c>>d;
	if(a==b&&b==c&&c==d){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(a<c&&b<d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<abs(start-end)<<" HORA(S) E "<<abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
     else if(a>c&&b<d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<24-abs(start-end)<<" HORA(S) E "<<abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
     else if(a<c&&b>d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<abs(start-end)-1<<" HORA(S) E "<<60-abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
     else if(a>c&&b>d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<24-abs(start-end)-1<<" HORA(S) E "<<60-abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
     else if(a>c&&b==d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<24-abs(start-end)<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
	 }
     else if(a==c&&b>d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<24-abs(start-end)-1<<" HORA(S) E "<<60-abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
     else if(a<c&&b==d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<abs(start-end)<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
	 }
     else if(a==c&&b<d){
		 start=a;
         end=c;
         startMin=b;
         endMin=d;
          cout<<"O JOGO DUROU "<<0<<" HORA(S) E "<<abs(startMin-endMin)<<" MINUTO(S)"<<endl;
	 }
  } 
     /*
     else{
         start=a;
         end=c;
         startMin=b;
         endMin=d;
         cout<<"O JOGO DUROU "<<24-abs(start-end)<<" HORA(S) E "<<60-abs(startMin-endMin)<<" MINUTO(S)"<<endl;
     }
     */
	 
	 
	 return 0;
}
