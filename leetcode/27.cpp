#include <vector>
using namespace std; 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // erase-remove removes all occurences of val in nums
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end()); 
        return nums.size();
    }
};