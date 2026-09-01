class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0; 
        int block[101] = {}; 
        for(int i = 0; i < nums.size(); i++){
            if(i == 0||nums[i]!=nums[i-1]) block[nums[i]]++; 
        }
        for(int i = 1; i <=100; i++){
            if(block[i]==1) ans++;
        }
        return ans; 
    }
};