class Solution {
public:
    vector<vector<int>> memo; 
    const int inf = 1e9; 
    int solve(int i, int tg, vector<vector<pair<int, int>>>& opt){
        if(tg == 0) return 0; 
        if( i == opt.size()) return inf; 
        //if the thing we want to search has already been computed before. 
        if(memo[i][tg] != -1) return memo[i][tg];
        //otherwise, if it hasn't been computed before then we should computed using recursion 
        int ans = solve(1+i, tg, opt); 
        for(auto [val, cost] : opt[i]){
            if(val <= tg){
                int res = solve(i+1, tg-val, opt); 
                if(res!=inf) ans = min(ans,cost+res); 
            }
        }
        return memo[i][tg] = ans; 
    }
    int minOperations(vector<int>& nums, int sum) {
        //we are solving this using dp
        int n = nums.size(); 
        vector<vector<pair<int, int>>> opt(n); 
        for(int i = 0; i<n;i++){
            int x = nums[i]; 
            opt[i].push_back({x, 0});
            // this is division 
            int curr = x; 
            int cost = 0; 
            while(curr>1) {
                curr /=2; 
                cost++; 
                if(curr<= sum) opt[i].push_back({curr, cost}); 
            }
            // this part is multiplication
            curr = x; cost = 0; 
            while(curr<=sum/2) {
                curr *=2; 
                cost++; 
                opt[i].push_back({curr,cost});
            }
            
        }
        memo.assign(n, vector<int>(sum+1,-1)); 
        int ans = solve(0, sum, opt); 
        return ans == inf ? -1 : ans; 
    }
};