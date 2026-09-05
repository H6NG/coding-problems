#include <vector>
#include <cmath>
using namespace std; 

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // instabiity score = max(nums[0..i]) - min(nums[i..n - 1])
        // basically this question is almost the same as the easy previous one. 3903
        // using dp and greedy.
        int index = 0; 
        int n = nums.size(); 
        vector<int> pm(n); 
        vector<int> sm(n); 
        // max
        pm[0] = nums[0]; 
        sm[n-1] = nums[n-1];
        for(int j = 1; j < n; j++){
            pm[j] = max(pm[j-1], nums[j]); 
        }
        //min
        for(int p = n-2; p >= 0; p--){
            sm[p] = min(sm[p+1], nums[p]); 
        }
        for(int i = 0; i < n; i++){
            if(pm[i]-sm[i]<=k) return i; 
        }
        return -1; 
    }
};