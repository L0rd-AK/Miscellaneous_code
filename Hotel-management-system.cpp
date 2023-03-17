#include <iostream>
using namespace std;
int main(){
    int quant,choice,choice1;
    int qrooms=0,qmoragpolaw=0,qplainRice=0,qbiriyani=0,qkachi=0,qdrinks=0,qegg=0; 
    int srooms=0,smoragpolaw=0,splainRice=0,sbiriyani=0,skachi=0,segg=0,sdrinks=0;
    int total_rooms=0,total_moragpolaw=0,total_plainRice=0,total_biriyani=0,total_kachi=0,total_egg=0,total_drinks=0;
    int pass; int count=0; int i=1;

    cout<<"\n\t Quantity of items we have:-";
    cout<<"\n Rooms available: ";
    cin>>qrooms;
    cout<<"\n Quantity of Moragpolaw: ";
    cin>>qmoragpolaw;
    cout<<"\n Quantity of Plain Rice: ";
    cin>>qplainRice;
    cout<<"\n Quantity of Briyani: ";
    cin>>qbiriyani;
    cout<<"\n Quantity of Kachi: ";
    cin>>qkachi;
    cout<<"\n Quantity of Eggs: ";
    cin>>qegg;
    cout<<"\n Quantity of Drinks: ";
    cin>>qdrinks;

    menu:
    cout<<"\n\t\t\t Please select from the menu options: ";
    cout<<"\n   1) Rooms - 750tk ";
    cout<<"\n   2) Moragpolaw - 100tk ";
    cout<<"\n   3) Plain Rice - 20tk ";
    cout<<"\n   4) kachi - 130tk";
    cout<<"\n   5) Eggs - 15tk";
    cout<<"\n   6) Drinks - 20tk";
    cout<<"\n   7) Exit ";
    cout<<"\n   8) *** Todays sales and collection ***";
    menu1:
    if(count==i){
    cout<<"\n   2) Moragpolaw ";
    cout<<"\n   3) Plain Rice ";
    cout<<"\n   4) kachi ";
    cout<<"\n   5) Eggs ";
    cout<<"\n   6) Drinks ";
    cout<<"\n   7) Exit ";
    i++;
    }
    cout<<"\n\n\t Please Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
         cout<<"\nEnter the number of Rooms you want: ";
         cin>>quant;
         if(qrooms-srooms>=quant)
         {
             srooms+=quant;
             total_rooms+=quant*750;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" rooms "<<endl;
             cout<<"Do you want to order food..?"<<endl;
             cout<<"1) Yes"<<endl;
             cout<<"2) NO "<<endl;
             cin>>choice1;
             if(choice1==1){
                 count++;
                 goto menu1;
             }else{
                 cout<<"*****************************************************";
                 cout<<"\n\tYour bill is "<<total_rooms<<endl;
                 cout<<"Thanks for staying with us, hope you have a nice day"<<endl;
                 cout<<"*****************************************************";
                 break;
             }
         }
         else
         {
             cout<<"\n\n Only "<<qrooms-srooms<<" Rooms remaining in hotel";
             break;
         }
        case 2:
         cout<<"\nEnter the quqntity of Moragpolaw you want: ";
         cin>>quant;
         if(qmoragpolaw-smoragpolaw>=quant)
         {
             smoragpolaw+=quant;
             total_moragpolaw+=quant*100;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" Moragpolaw ";
             goto menu;
         }
         else
         {
             cout<<"\n\n  Sorry Only "<<qmoragpolaw-smoragpolaw<<" Moragpolaw remaining in hotel";
             break;
         }
        case 3:
         cout<<"\n\nEnter the quqntity of Plain Rice you want: ";
         cin>>quant;
         if(qplainRice-splainRice>=quant)
         {
             splainRice+=quant;
             total_plainRice+=quant*20;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" Plain Rice ";
             goto menu;
         }
         else
         {
             cout<<"\n\n  Sorry Only "<<qplainRice-splainRice<<" Plain Rice remaining in hotel";
             break;
         }
        case 4:
         cout<<"\n\nEnter the quqntity of kachi you want: ";
         cin>>quant;
         if(qkachi-skachi>=quant)
         {
             skachi+=quant;
             total_kachi+=quant*130;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" kachi ";
             goto menu;
         }
         else
         {
             cout<<"\n\n  Sorry Only "<<qplainRice-splainRice<<" kachi remaining in hotel";
             break;
         }
        case 5:
         cout<<"\n\nEnter the number of Eggs you want: ";
         cin>>quant;
         if(qegg-segg>=quant)
         {
             segg+=quant;
             total_egg+=quant*15;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" Eggs ";
             goto menu;
         }
         else
         {
             cout<<"\n\n Only "<<qegg-segg<<" Eggs remaining in hotel";
             break;
         }
        case 6:
         cout<<"\n\nEnter the number of Drinks you want: ";
         cin>>quant;
         if(qdrinks-sdrinks>=quant)
         {
             sdrinks+=quant;
             total_drinks+=quant*20;
             cout<<"\n\n\t"<<"You have ordered "<<quant<<" Drinks ";
             goto menu;
         }
         else
         {
             cout<<"\n\n Only "<<qdrinks-sdrinks<<" Drinks remaining in hotel";
             break;
         }
        case 7:
         cout<<"*****************************************************";
         cout<<"Your bill is :"<<total_rooms+total_plainRice+total_moragpolaw+total_kachi+total_egg+total_drinks+total_biriyani<<"tk"<<"\n";
         cout<<"*****************************************************";
         break;
        case 8:
         cout<<"\n\n\t\tTodays sales and collection: ";
         cout<<"\n\tThis option is only available for hotel's owner:";
         cout<<"\nTo see Todays sales and collection, you have to enter a password";
         cout<<"\nPASSWORD: "<<endl;
         cin>>pass;
         if(pass==2001)
         {
           cout<<"\n\nNumber of rooms we had: "<<qrooms<<endl;
           cout<<"\n\nNumber of rooms is booked: "<<srooms<<endl;
           cout<<"\n\nTodays income from renting rooms: "<<total_rooms<<endl;

           cout<<"\n\nNumber of Moragpolaw we had: "<<qmoragpolaw<<endl;
           cout<<"\n\nNumber of Moragpolaw we have sold: "<<qmoragpolaw-smoragpolaw<<endl;
           cout<<"\n\nTodays income from selling Moragpolaw: "<<total_moragpolaw<<"tk"<<endl;

           cout<<"\n\nNumber of pnain Rice we had: "<<qplainRice<<endl;
           cout<<"\n\nNumber of pnain Rice we have sold: "<<qplainRice-splainRice<<endl;
           cout<<"\n\nTodays income from selling pnain Rice: "<<total_plainRice<<"tk"<<endl;

           cout<<"\n\nNumber of kachi we had: "<<qkachi<<endl;
           cout<<"\n\nNumber of kachi we have sold: "<<skachi<<endl;
           cout<<"\n\nTodays income from selling kachi: "<<total_kachi<<"tk"<<endl;

           cout<<"\n\nNumber of Egg we had: "<<qegg<<endl;
           cout<<"\n\nNumber of Egg we have sold: "<<qegg-segg<<endl;
           cout<<"\n\nTodays income from selling Egg: "<<total_egg<<"tK"<<endl;

           cout<<"\n\nNumber of Drinks we had: "<<qdrinks<<endl;
           cout<<"\n\nNumber of Drinks we have sold: "<<sdrinks<<endl;
           cout<<"\n\nTodays income from selling Drinks: "<<total_drinks<<"tk"<<endl;
        }
         else
         {
             
             cout<<"Wrong Passwod!!!";
             break;
         }
        default:
         cout<<"Please enter value between 1 to 8"<<endl;
    }
    goto menu;
}