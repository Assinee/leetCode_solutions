#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v ;
        for(auto element : nums){
            if(element != val){
                v.push_back(element);
            }
        }
        nums= v;
        return v.size();
    }
};
int main(){

}