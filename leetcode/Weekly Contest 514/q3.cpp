#include <cmath>
#include <vector>
#include <iostream> 
#include <algorithm> 
using namespace std; 

class Solution {
public:
    int maxArea(vector<vector<int>>& mat) {

        // given a 2D int matrix "mat" of size "m" x "n"
        // if mat[r][c] == 1 means usable
        // otherwise unusable

        // goal: find two submatrices that satisfy the conditions: 
        // both must be a square of length k 
        // must not overlap 
        // can only cover mat[r][c] = 1 

        // return max possible area
        // if not possible then return 0; 

        // square are 1x1, 2x2, 3x3, 4x4, ..., kxk
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1));

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                prefix[r + 1][c + 1] = mat[r][c] + prefix[r][c + 1] + prefix[r + 1][c] - prefix[r][c];
            }
        }
        
        for (int k = max(m,n)/2; k >= 1; k--) {

            // each loop we are asking ourselves:
            // Can I find 2 valid non-overlapping k*k squares?
            // that's why in a 5x6, we can't check for 5x5 but 3x3.

            // we got the "target square" now we need to iterate through the matrix
            int minR = m;
            int maxR = -1;
            int minC = n;
            int maxC = -1;
        
            for (int r = 0; r + k <= m; r++) {
                for (int c = 0; c + k <= n; c++) {
        
                    int ones = prefix[r+k][c+k]
                             - prefix[r][c+k]
                             - prefix[r+k][c]
                             + prefix[r][c];
        
                    if (ones == k * k) {
                        minR = min(minR, r);
                        maxR = max(maxR, r);
                        minC = min(minC, c);
                        maxC = max(maxC, c);
                    }
                }
            }
        
            if (maxR - minR >= k || maxC - minC >= k) {
                return k * k;
            }
        }
        // if no matching 
        return 0; 
        
    }
};