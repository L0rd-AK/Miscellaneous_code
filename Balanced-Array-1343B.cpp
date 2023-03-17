#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,a, sum1=0, sum2=0,sum3=0,sum4=0,sum=0;
    vector<int>arr;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a; 
        arr.clear();
        sum1=0,sum2=0,sum=0,sum3=0,sum4=0;
        for(int i=1;i<=a;i++)
        {
                if(i%2==0){
                    arr.push_back(i);
                    sum1+=i;
                }
                
        }
        for(int i=1;i<=a;i++)
        {
                if(i%2!=0){
                    arr.push_back(i);
                    sum2+=i;
                }
                
        }
        /*
        for(int i=0;i<a;i++)
        {
               cout<<arr[i]<<" "; 
        }
        */
        //#############
        //cout<<"\n"<<sum1<<" "<<sum2;
        //8888888888888888
        if(sum1==sum2){
            cout<<"YES"<<endl;
            break;
        }else{
            sum=abs(sum1-sum2);
            //cout<<"\n"<<sum<<"\n";
            arr[a-1]+=sum;
        }
        //################
        /*
        for(int i=0;i<a;i++)
        {
               cout<<arr[i]<<" "; 
        }
        */
        //################
        for(int i=0;i<a;i++){
            if(arr[i]%2==0){
                sum3+=arr[i];
            }else{
                sum4+=arr[i];
            }
        }
        //###############
        //cout<<"\n"<<sum3<<" "<<sum4;
        //################
            //if(arr[a-1]%2!=0){
                //cout<<"YES"<<endl;
                if(sum3==sum4){
                    cout<<"YES"<<endl;
                    for(int i=0;i<a;i++){
                        cout<<arr[i]<<" ";
                    }
                }else{
                    cout<<"NO"<<endl;
                }
            //}
        //###################
        
    }

    return 0;
}