#include <vector> 
using namespace std; 

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans; 
        ans.reserve(nums.size() * 2); 
        int n = 2; 
        while(n--){
            for(int i = 0; i < nums.size(); i++){
                ans.push_back(nums[i]); 
            }
        }
        return ans; 
    }
};