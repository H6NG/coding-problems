#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int ans; 
        for(int i = 0; i < nums.size(); i+=3){
            if(i + 2 < nums.size() && nums[i] != nums[i+2]){
                ans = nums[i]; 
                break;
            }
            // if it is out of bound then it is surely the last 
            // [2,2,2,3] 
            // it cannot be like [2,2,3,2] because I sorted out.
            else if(i + 2 > nums.size()) return nums[nums.size()-1]; 
        }
        return ans; 
    }
};