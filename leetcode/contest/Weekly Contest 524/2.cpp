#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        vector<vector<bool>> seen(n, vector<bool>(m, false)); 
        int curr_r = 0, curr_c = 0; 
        vector<int> last = {0,0}; 
        while(curr_r>=0 && curr_r < n && curr_c >= 0 && curr_c < m && !seen[curr_r][curr_c]){
            seen[curr_r][curr_c] = true; 
            last = {curr_r, curr_c}; 
            char a = grid[curr_r][curr_c]; 
            if(a == 'R') curr_c++; 
            else if(a == 'L') curr_c--; 
            else if(a == 'U') curr_r--; 
            else curr_r++; 
        }
        return last; 
    }
};