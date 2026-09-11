#include <vector>
using namespace std; 

// this is a bitmasking problem 
// [1,2,3] 
// (0,0,1) you only take the 3rd one. 
// (1,1,1) you take them all. 

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 
        int n = nums.size(); 
        for(int mask = 0; mask < (1 << n); mask++){
            vector<int> sub; 
            for(int j = 0; j < n; j++){
                if(mask & (1 << j)) sub.push_back(nums[j]); 
            }
            ans.push_back(sub); 
        }
        sort(ans.begin(), ans.end()); 
        return ans; 
    }
};