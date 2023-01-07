#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>& nums){
    vector<int> memo(nums.size());   
    for(int i=0;i<nums.size()-1;++i){
        memo[i]=nums[i];
        for(int j=i+1;j<nums.size();++j){            
            if(nums[j]>=0){
                memo[i]=memo[i]+nums[j];
            }else{
                if(memo[i]+nums[j+1]+nums[j]>memo[i]){
                    memo[i]=memo[i]+nums[j];
                }else{                    
                    break;        
                }
            }
                 
        }        
    }
    memo[nums.size()-1]=nums[nums.size()-1];    
    sort(memo.begin(),memo.end());
    return memo[memo.size()-1];
    }

int main(){
    vector<int> nums;
    for(int i=0;i<9;++i){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<< maxSubarray(nums);

    //error//
}