#include <vector>
using namespace std; 

class Solution {
public:
    void rs(int n, int k, vector<int>& row){
        while(k--){
            int first = row[0]; 
            for(int i = 1; i < n; i++){
                row[i-1] = row[i]; 
            }
            row[n-1] = first; 
        }
    }
    void cs(int n, int k, vector<vector<int>>& grid){
        vector<int> v; 
        int num_of_rows = grid.size(); 
        for(int i = 0; i < num_of_rows; i++){
            v.push_back(grid[i][n]); 
        }
        rs(num_of_rows, k, v);
        for(int j = 0; j < num_of_rows; j++){
            grid[j][n] = v[j]; 
        }
    }
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        int col = grid[0].size(); 
        int row = grid.size(); 
        for(int i = 0; i < row; i++){
            rs(col, rowShift[i], grid[i]); 
        }
        for(int j = 0; j < col; j++){
            cs(j, colShift[j], grid);
        }
        return grid;
    }
};