#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a,size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    vector<int> nums;
    for(int i=0;i<size;i++){
        cin>>a;
        nums.push_back(a);
    }
    
    int target;
    cout<<"Enter the target num: "<<endl;
    cin>>target; 
    
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    
    return 0;
}