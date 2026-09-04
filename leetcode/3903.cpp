#include <vector>
using namespace std; 

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int index = 0; 
        for(int i = 0; i < nums.size(); i++){
            // max
            int ma = INT_MIN; int mi = INT_MAX; 
            for(int j = 0; j <= i; j++){
                if(nums[j] > ma) ma = nums[j]; 
            }
            //min
            for(int p = i; p < nums.size(); p++){
                if(nums[p] < mi) mi = nums[p]; 
            }
            if(ma-mi<=k) return i; 
        }
        return -1; 
    }
};