#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result ="";
        for(int i=0;i<strs[0].size();++i){
            char a = strs[0][i];
            for(int j=1;j<strs.size();++j){
                 if(a!=strs[j][i]){
                     return result;
                 }
            }
            result=result+strs[0][i];
        }
        return result; 
    }
};