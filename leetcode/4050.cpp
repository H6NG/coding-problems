#include <vector>
#include <climits>
using namespace std; 

class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n+1, INT_MAX); 
        dp[0] = 0; 
        for(int i = 0; i <= n; i++){
            if(dp[i] == INT_MAX) continue; 
            for(int j = 1; j*(j+1)/2<=n-i;j++){
                int p = j*(j+1)/2; 
                if(i==0) dp[i+p] = min(dp[i+p],dp[i]+j); 
                else dp[i+p] = min(dp[i+p],dp[i]+j+1); 
            }
        }
        return dp[n]; 
    }
};