#include <vector>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, 0);  
        //1->1
        //2->2 
        //3->5
        // searched up online and it's the catalan's number sequence. 
        dp[0] = 1; 
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < i; j++){
                dp[i] += dp[j] * dp[i-1-j]; 
            }
        }
        return dp[n]; 
    }
};