#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     vector<vector<int>> element(vector<int>a, vector<vector<int>>b, int n, int l,int k, int m){
//         for(int j = m; j<n-k+l+1 ;++j){
//             vector<int>c;
//             c=a;
//             c.push_back(j);
//             cout<<j;
//             if(l==k){
//                 b.push_back(c);
//             }else{
//                 element(c,b,n,l+1,k,m+1);
//             }
//         }
//         return b;       
//     }
//     vector<vector<int>> combine(int n, int k) {
//         vector<vector<int>> b;
//         for(int i=1;i<n-k+2;++i){
//             vector<int> a{i};
//             if(k==1){
//                 b.push_back(a);
//             }else{
//                 b=element(a,b,n,2,k,i+1);
                
//             }
//         }        
//         return b;
//     }
// };


class Solution {
public:
    vector<vector<int>> ans;
    int nl;

    void solve(vector<int> &a, int id, int k) {
        if(k == 0) {
            ans.push_back(a);
            return;
        }
        for(int i=id; i<=nl; i++) {
            a.push_back(i);
            solve(a, i+1, k-1);
            a.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        nl = n;
        vector<int> a;
        solve(a, 1, k);
        return ans;
    }
};
int main(){

}