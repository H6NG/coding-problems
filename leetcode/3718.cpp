
#include <unordered_set>
#include <vector>
using namespace std; 

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int i = k; 
        while(s.find(i)!=s.end()) i+=k; 
        return i; 
    }
};