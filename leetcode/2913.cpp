#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0; 
        int n = nums.size(); 
        for(int i = 0; i < n; i++){
            set<int> a; 
            for(int k = i; k < n; k++){
                a.insert(nums[k]); 
                ans+=a.size()*a.size();
            }
        }
        return ans; 
    }
};