using ll = long long;
#include <vector>
#include <string>
using namespace std; 

class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<ll>> dp(s.size()+1, vector<ll>(t.size()+1)); 
        // dp[s][t]
        ll n = s.size(); ll m = t.size(); 
        dp[0][0] = 1; 
        for(ll i = 1; i <= m; i++) dp[0][i] = 0; 
        for(ll i = 1; i <= n; i++) dp[i][0] = 1; 
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                    if(dp[i][j] > INT_MAX) dp[i][j] = INT_MAX;
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][m]; 
    }
};