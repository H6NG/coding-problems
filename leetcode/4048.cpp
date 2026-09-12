// took 14 mins and 27 sec to come up with this solution

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
        for(int i = 0; i <= 100; i++){
            if(freq[i].size() == 3){
                if(freq[i][1]-freq[i][0] == freq[i][2]-freq[i][1]) ans++; 
            }
        }
        return ans; 
    }
};