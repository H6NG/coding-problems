




/*
that'S a O(n^2) solution. it wouldn't work because MLE. 

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int max = INT_MIN; 
        for(int i = 0; i < nums.size(); i++){
            nums = rotateNext(nums); 
            long curr = 0; 
            for(int j = 0; j < nums.size(); j++){
                curr += j * nums[j]; 
            }
            if(curr > max) max = curr; 
        }
        return max; 
    }
    vector<int> rotateNext(vector<int>& nums){
        vector<int> v(nums.size()); 
        long one = nums[0]; 
        for(int i = 1; i < nums.size(); i++){
            v[i-1] = nums[i];
        }
        v[nums.size()-1] = one; 
        return v; 
    }
};*/
#include <vector>
using namespace std; 

#define ll long long
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        ll sum = 0;
        ll curr = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            curr += (ll)i * nums[i];
        }

        ll ans = curr;
        for (int i = nums.size() - 1; i >= 0; i--) {
            curr = curr + sum - (ll) nums.size() * nums[i];
            ans = max(ans, curr);
        }

        return ans;
    }
};