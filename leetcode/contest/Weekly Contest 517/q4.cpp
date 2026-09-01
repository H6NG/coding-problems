class Solution {
public:
    // what's different from the previous question is that now you have possibility to divide and multiple whenever. 
    //but it'S quite pointless because 2*2/2 = 2 and 2/2*2 = 2
    // we should map in a 2D matrix where x's are /2 and y's are *2 and just have a start and a target following the least amount of moves to get there.
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
            queue<int> q; 
            int lim = 10000;  
            vector<int> dist(lim+1, inf); 
            dist[x] = 0; q.push(x); 
            while(!q.empty()){
                int curr = q.front(); 
                q.pop(); 
                int cost = dist[curr]; 
                if(curr<=lim/2){
                    int next=curr*2; 
                    if(dist[next] == inf){
                        dist[next] = cost+1; 
                        q.push(next); 
                    }
                }
                int next = curr/2; 
                if(next>0 && dist[next] == inf){
                    dist[next] = cost+1; 
                    q.push(next); 
                }
            }
            for(int v = 1; v<= sum; v++){
                if(dist[v] != inf) opt[i].push_back({v,dist[v]}); 
            }
            
        }
        memo.assign(n, vector<int>(sum+1,-1)); 
        int ans = solve(0, sum, opt); 
        return ans == inf ? -1 : ans; 
    }
};