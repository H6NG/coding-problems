#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]-1==nums[i-1]) ans+=nums[i];
            else break; 
        }
        ans+=nums[0]; 
        cout << ans; 
        unordered_set<int> s; 
        for(int i : nums){
            s.insert(i); 
        }
        while(s.find(ans)!=s.end()){
            ans++; 
        }
        return ans; 
    }
};