#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int c =0;
        unordered_map<int,int> mp ;
        for(int i=0;i<board.size();++i){  
                if(board[i][0]=='X'&& mp[0]==0){
                    ++c;
                    cout<<i<<0;
                    ++mp[0];                    
                };
                if(board[i][0]=='.' && mp[0]!=0){
                    mp[0]=0;
                }
            
            if(board[i][0]=='.' && mp[0]!=0){
                    mp[0]=0;
                }         
            for(int j=1;j<board[i].size();++j){
                if(board[i][j]=='X' && board[i][j-1]=='.' && mp[j]==0){
                    ++c;
                    cout<<i<<j;
                    ++mp[j];                    
                };
                if(board[i][j]=='.' && mp[j]==1){
                    mp[j]=0;
                }
            }
            
        }
        
        return c;
    }
    // [".","X",".",".","X"]
    // ["X",".",".","X","."]
    // [".","X",".",".","X"]
    // [".","X",".","X","."]
    // ["X",".","X",".","X"]
};
int main(){}