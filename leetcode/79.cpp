#include <string>
#include <vector>
using namespace std; 

class Solution {
public:

    bool dfs(int i, int j, int index, string word, int m, int n, vector<vector<char>>& board){ // {i,j} and index is how deep am I in the word. that's the goal of dfs 
        //trivial case
        if(index == word.size()) return true; 
        // invalid pos 
        if(i < 0 || i >= m || j < 0 || j >= n) return false; 
        // wrong char
        if(board[i][j] != word[index]) return false; 
        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(i+1,j,index+1,word,m,n,board) || dfs(i-1,j,index+1,word,m,n,board) || dfs(i,j+1,index+1,word,m,n,board) || dfs(i,j-1,index+1,word,m,n,board);
        // Backtrack
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(); 
        int n = board[0].size(); 
        
        // we should do DFS 
        for(int i=0; i < m; i++){
            for(int j=0; j < n; j++){
                if(dfs(i, j, 0, word, m, n, board) == true) return true; 
            }
        }
        return false; 
    }
};