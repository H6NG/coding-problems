#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0; 
        int n = nums.size(); 
        for(int& i : nums) i = i*i; 
        sort(nums.begin(), nums.end(), greater<>()); 
        //two pointers 
        if(n%2==0){
            for(int i = 0; i < n/2; i++){
                ans+=nums[i];
                ans-=nums[n-i-1];
            }
        }
        else{
            for(int i = 0; i < n/2+1; i++){
                ans+=nums[i];
                if(n%2==1 && i == n/2) break; 
                ans-=nums[n-i-1];
            }
        }
        return ans; 
    }
};