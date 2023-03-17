#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
    int t[15],a[15],count1=0,count2=0;
    vector<long long int> par,impar;
 	for(int i=0;i<15;i++){
 		cin>>t[i];
 	}
 	for(int i=0;i<15;i++){
 		if(t[i]%2==0){
 				par.push_back(t[i]);
 				count1++;
 			}else{
 				impar.push_back(t[i]);
 				count2++;
 			}
 	}
     if(count1>count2){
        for(int j=0;j<5;j++){
 			cout<<"par["<<j<<"] = "<<par[j]<<endl;
 		}
        for(int j=0;j<5;j++){
 			cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
 		}
        for(int j=5,i=0,k=5;k<count2;j++,i++,k++){
 			cout<<"impar["<<i<<"] = "<<impar[j]<<endl;
 		}
        for(int j=5,i=0,k=5;k<count1;j++,i++,k++){
 			cout<<"par["<<i<<"] = "<<par[j]<<endl;
 		}
    }else{
        for(int j=0;j<5;j++){
 			cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
 		}
        for(int j=0;j<5;j++){
 			cout<<"par["<<j<<"] = "<<par[j]<<endl;
 		}
        for(int j=5,i=0,k=5;k<count2;j++,i++,k++){
 			cout<<"impar["<<i<<"] = "<<impar[j]<<endl;
 		}
        for(int j=5,i=0,k=5;k<count1;j++,i++,k++){
 			cout<<"par["<<i<<"] = "<<par[j]<<endl;
 		}
    }
    // if(count1>count2){
    //     for(int j=0;j<5;j++){
 	// 		cout<<"par["<<j<<"] = "<<par[j]<<endl;
 	// 	}
    //     for(int i=0,j=0;i<count2;i++,j++){
    //     cout<<"impar["<<j<<"] = "<<impar[i]<<endl;
    //     if(j==4){
    //         j=-1;
    //     }
 	//   }
    //   for(int j=5,i=0,k=5;k<count1;j++,i++,k++){
 	// 		cout<<"par["<<i<<"] = "<<par[j]<<endl;
 	// 	}
    // }else{
    //     for(int j=0;j<5;j++){
 	// 		cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
 	// 	}
    //     for(int i=0,j=0;i<count1;i++,j++){
    //     cout<<"par["<<j<<"] = "<<par[i]<<endl;
    //     if(j==4){
    //         j=-1;
    //     }
 	//   }
    //   for(int j=5,i=0,k=5;k<count2;j++,i++,k++){
 	// 		cout<<"impar["<<i<<"] = "<<impar[j]<<endl;
 	// 	}
    // }
 	
 	
 	
 
    return 0;
}
