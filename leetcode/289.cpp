#include <vector> 
using namespace std; 

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(); 
        int m = board[0].size(); 
        vector<vector<int>> copy(board); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(copy[i][j] == 1){
                    if(live_n(copy, i, j) < 2) board[i][j]=0; 
                    if(live_n(copy, i, j) > 3) board[i][j]=0; 
                }
                else{ //if == 0 
                    if(live_n(copy, i, j) == 3) board[i][j]=1; 
                }
            }   
        }
    }
    //my helper func
    int live_n(vector<vector<int>>& board, int x, int y){
        int col = board[0].size(); 
        int row = board.size(); 
        int live_neighbour = 0; 
        // up row 
        if(x-1 >= 0 && y-1 >= 0){
            if(board[x-1][y-1] == 1) live_neighbour++; 
        }
        if(y-1>=0){
            if(board[x][y-1] == 1) live_neighbour++;
        }
        if(x+1 < row && y-1 >=0){
            if(board[x+1][y-1] == 1) live_neighbour++;
        }
        // middle row 
        if(x-1>=0){
            if(board[x-1][y] == 1) live_neighbour++;
        }
        if(x+1<row){
            if(board[x+1][y] == 1) live_neighbour++; 
        }
        // down row
        if(x-1 >=0 && y+1< col){
            if(board[x-1][y+1] == 1) live_neighbour++; 
        }
        if(y+1 < col){
            if(board[x][y+1] == 1) live_neighbour++;
        }
        if(y+1 < col && x+1 < row){
            if(board[x+1][y+1] == 1) live_neighbour++;
        }
        return live_neighbour; 
    }
};