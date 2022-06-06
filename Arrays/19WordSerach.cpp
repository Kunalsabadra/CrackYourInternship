class Solution {
public:
     bool check(vector<vector<char>> &board , int i , int j , int idx, string &word){     
         int n = board.size()-1;
         int m = board[0].size()-1;
        if(idx == word.length()-1) return true;
       board[i][j] -= 65;
     if(i <n  and board[i+1][j] == word[idx+1] and check(board , i+1,j,idx+1,word))
     return true;
        if(i >0 and board[i-1][j] == word[idx+1] and check(board , i-1,j,idx+1,word))
         return true;
           if(j<m  and board[i][j+1] == word[idx+1] and check(board , i,j+1,idx+1,word))
               return true;
              if(j>0 and board[i][j-1] == word[idx+1] and check(board , i,j-1,idx+1,word))
                 return true;
                board[i][j] += 65;
                 return false;
     }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size() ,m = board[0].size();
       
        for(int i=0;i<n; i++)
            for(int j=0;j<m; j++)
                if(board[i][j] == word[0] and check(board , i,j,0 ,word)) return true;
                return false;
                }
};
