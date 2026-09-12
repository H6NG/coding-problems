// took 11 mins and 13 sec to come up with this solution
// It's the same as the 4048.cpp but with a little twist.

#include <vector>
#include <map>
using namespace std; 


class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size(); 
        map<int, vector<int>> freq;
        for(int i = 0; i < n; i++){
            freq[nums[i]].push_back(i); 
        }
        int ans = 0; 
        for(auto& [i, pos] : freq){
            int s = pos.size(); 
            if(s >= 3){
                int n = 0; 
                int num_to_follow = pos[1]-pos[0];
                for(int j = 1; j < s; j++){
                    if(pos[j]-pos[j-1] == num_to_follow) n++; 
                }
                if(n == s-1) ans++;             
            }
        }
        return ans; 
    }
};